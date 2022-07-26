#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/CodeGen/ObjectFilePCHContainerOperations.h"
#include "clang/Driver/Options.h"
#include "clang/Rewrite/Frontend/FixItRewriter.h"
#include "clang/Rewrite/Frontend/FrontendActions.h"
#include "clang/StaticAnalyzer/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Syntax/BuildTree.h"
#include "clang/Tooling/Syntax/Tokens.h"
#include "clang/Tooling/Syntax/Tree.h"
#include "clang/Tooling/Tooling.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/Option/OptTable.h"
#include "llvm/Support/Path.h"
#include "llvm/Support/Signals.h"
#include "llvm/Support/TargetSelect.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::driver;
using namespace clang::tooling;
using namespace llvm;


static cl::extrahelp CommonHelp(CommonOptionsParser::HelpMessage);
static cl::extrahelp MoreHelp(
    "\tFor example, to run clang-check on all files in a subtree of the\n"
    "\tsource tree, use:\n"
    "\n"
    "\t  find path/in/subtree -name '*.cpp'|xargs clang-check\n"
    "\n"
    "\tor using a specific build path:\n"
    "\n"
    "\t  find path/in/subtree -name '*.cpp'|xargs clang-check -p build/path\n"
    "\n"
    "\tNote, that path/in/subtree and current directory should follow the\n"
    "\trules described above.\n"
    "\n");

static cl::OptionCategory ClangCheckCategory("clang-check options");
static const opt::OptTable &Options = getDriverOptTable();
static cl::opt<bool>
    ASTDump("ast-dump",
            cl::desc(Options.getOptionHelpText(options::OPT_ast_dump)),
            cl::cat(ClangCheckCategory));

static int fc; // 用于统计函数个数


class FindNamedClassVisitor
    : public RecursiveASTVisitor<FindNamedClassVisitor> {
public:
  explicit FindNamedClassVisitor(ASTContext *context, SourceManager *sm,
                                 Rewriter *rw)
      : context_(context), sm_(sm), rewriter_(rw) {}

#if 0
  bool VisitCXXRecordDecl(CXXRecordDecl *declaration) {
    
    if (sm_->isInMainFile(declaration->getLocation())) {
      declaration->dump();
    }
    
    
    if (declaration->getQualifiedNameAsString() == "A::foo") {

      FullSourceLoc FullLocation =
          context_->getFullLoc(declaration->getBeginLoc());
      if (FullLocation.isValid())
        llvm::outs() << "Found declaration at "
                     << FullLocation.getSpellingLineNumber() << ":"
                     << FullLocation.getSpellingColumnNumber() << "\n";
    }
    return true;
  }
  #endif
    bool VisitDecl(Decl *declaration) {

        if (sm_->isInMainFile(declaration->getLocation())) {
          //declaration->dump();
        }


        return true;
    }

    bool VisitFunctionDecl(FunctionDecl *fd) {
      if (fd->isThisDeclarationADefinition() &&
          sm_->isInMainFile(fd->getLocation())) {

        llvm::outs() << fd->getNameAsString() << ":" << fd->hasTrivialBody()
                     << "\n";

        for (unsigned int i = 0, j = fd->getNumParams(); i < j; i++) {
          llvm::outs() << "  paraType: "
                       << fd->getParamDecl(i)->getType().getAsString() << "\n";
        }
        for (unsigned int i = 0, j = fd->getNumTemplateParameterLists(); i < j;
             i++) {
          for (unsigned int k = 0, l = fd->getTemplateParameterList(i)->size();
               k < l; k++) {
            llvm::outs() << "  tempparaType: "
                         << fd->getTemplateParameterList(i)
                                ->getParam(k)
                                ->getNameAsString()
                         << "\n";
          }
        }
        fc++;
        caller_ = fd->getNameInfo().getName().getAsString();
      }
      return true;
    }

    bool VisitFunctionTemplateDecl(FunctionTemplateDecl *fd) {
      if (fd->isThisDeclarationADefinition() &&
          sm_->isInMainFile(fd->getLocation())) {

        llvm::outs() << "template:" << fd->getNameAsString() << "\n";

      }

      return true;
    }

    bool VisitCallExpr(CallExpr *ce) {
      if (sm_->isInMainFile(ce->getBeginLoc()) && ce != nullptr) {
        Expr *exp = ce->getCallee();
        QualType q = ce->getType();
        const Type *t = q.getTypePtrOrNull();

        if (t != nullptr) {
          FunctionDecl *func = ce->getDirectCallee(); 
          if (func != nullptr) {
            std::string callee = func->getNameInfo().getName().getAsString();
            llvm::outs() << callee << " is called by " << caller_ << "\n";
            for (unsigned int i = 0, j = ce->getNumArgs(); i < j; i++) {
              llvm::outs() << "  argType: "
                           << ce->getArg(i)->getType().getAsString() << "\n";
            }
          }
        }
      }
      return true;
    }


    bool VisitStmt(Stmt *s) {
        // Only care about If statements.
      if (sm_->isInMainFile(s->getBeginLoc()) && isa<IfStmt>(s)) {
            IfStmt *IfStatement = cast<IfStmt>(s);
            Stmt *Then = IfStatement->getThen();

            rewriter_->InsertText(Then->getBeginLoc(), "// the 'if' part\n", true, true);

            Stmt *Else = IfStatement->getElse();
            if (Else) {
              rewriter_->InsertText(Else->getBeginLoc(), "// the 'else' part\n", true, true);
            }
                                        
        }

      return true;
    }

private:
  ASTContext *context_;
  SourceManager *sm_;
  std::string caller_;
  Rewriter *rewriter_;
};



class IfStmtHandler : public MatchFinder::MatchCallback {
public:
  IfStmtHandler(Rewriter &Rewrite) : Rewrite(Rewrite) {}

  virtual void run(const MatchFinder::MatchResult &Result) {
    // The matched 'if' statement was bound to 'ifStmt'.
    if (const IfStmt *IfS = Result.Nodes.getNodeAs<clang::IfStmt>("ifStmt")) {
      const Stmt *Then = IfS->getThen();
      Rewrite.InsertText(Then->getBeginLoc(), "// the 'if' part\n", true, true);

      if (const Stmt *Else = IfS->getElse()) {
        Rewrite.InsertText(Else->getBeginLoc(), "// the 'else' part\n", true, true);
      }
    }
  }

private:
  Rewriter &Rewrite;
};


class FindNamedClassConsumer : public clang::ASTConsumer {
public:
  explicit FindNamedClassConsumer(ASTContext *context, SourceManager *sm,
                                  Rewriter *rw)
      : visitor_(context, sm, rw), sm_(sm), rewriter_(rw), handlerif_(*rw) {}

  ~FindNamedClassConsumer() {
    llvm::outs() << "I have seen " << fc << " functions. " << "\n";

  }
  virtual void Initialize(ASTContext &Context) override {
    context_ = &Context;
    // Add a simple matcher for finding 'if' statements.
    matcher_.addMatcher(ifStmt().bind("ifStmt"), &handlerif_);

    //DeclarationMatcher GlobalVarMatcher = varDecl(hasGlobalStorage(), unless(hasAncestor(functionDecl()))).bind("gvar");
  }

  virtual bool HandleTopLevelDecl(DeclGroupRef group) override {
    for (auto itr = group.begin(); itr != group.end(); ++itr) {
      // if this decl is a reflectable type ...

      auto tagDecl = dyn_cast<TagDecl>(*itr);

      if (tagDecl == nullptr) {
        continue;
      }
      context_->getCommentForDecl(tagDecl, nullptr);

    }

    return true;
  }


  virtual void HandleTranslationUnit(clang::ASTContext &context) override {
    fc = 0;
    // 使用遍历模式
    visitor_.TraverseDecl(context.getTranslationUnitDecl());
    // 使用匹配模式
    //matcher_.matchAST(context);
#if 0
    TranslationUnitDecl *dc =context.getTranslationUnitDecl();
    if (dc) {
      for (DeclContext::decl_iterator dit = dc->decls_begin();
           dit != dc->decls_end(); dit++) {
        llvm::outs() << dit->getDeclKindName() << '\n';
      }
    }
#endif

  }

private:
  FindNamedClassVisitor visitor_;
  ASTContext *context_;
  SourceManager *sm_;
  Rewriter *rewriter_;
  IfStmtHandler handlerif_;
  MatchFinder matcher_;
};

class FindNamedClassAction : public clang::ASTFrontendAction {
public:

  void EndSourceFileAction() override {
    //rewriter_.getEditBuffer(rewriter_.getSourceMgr().getMainFileID()) .write(llvm::outs());

#if 0
    std::error_code error_code;
    llvm::raw_fd_ostream outFile("output.txt", error_code,
                                 llvm::sys::fs::F_None);
     rewriter_.getEditBuffer(rewriter_.getSourceMgr().getMainFileID())
        .write(outFile); 
    outFile.close();
#endif
    rewriter_.overwriteChangedFiles();
#if 0
    const RewriteBuffer *rbuf =
        rewriter_.getRewriteBufferFor(rewriter_.getSourceMgr().getMainFileID());
    if (rbuf) {
      llvm::outs() << std::string(rbuf->begin(), rbuf->end());
    }
#endif
  }


  virtual std::unique_ptr<clang::ASTConsumer>
  CreateASTConsumer(clang::CompilerInstance &compiler, llvm::StringRef in_file) {
    // 屏蔽错误信息输出
    compiler.getDiagnostics().setClient(new IgnoringDiagConsumer()); // 相当于-w
    
    rewriter_.setSourceMgr(compiler.getSourceManager(), compiler.getLangOpts());
    
    return std::make_unique<FindNamedClassConsumer>(
        &compiler.getASTContext(), &compiler.getSourceManager(), &rewriter_);
  }

private:
  Rewriter rewriter_;
  };


//命令行参数： -ast-dump ast.cpp --  屏蔽编译数据库找不到
int main(int argc, const char **argv) {
  llvm::sys::PrintStackTraceOnErrorSignal(argv[0]);

  // Initialize targets for clang module support.
  llvm::InitializeAllTargets();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllAsmPrinters();
  llvm::InitializeAllAsmParsers();


  auto ExpectedParser =
      CommonOptionsParser::create(argc, argv, ClangCheckCategory);
  if (!ExpectedParser) {
    llvm::errs() << ExpectedParser.takeError();
    return 1;
  }
  CommonOptionsParser &OptionsParser = ExpectedParser.get();
  ClangTool Tool(OptionsParser.getCompilations(),
                 OptionsParser.getSourcePathList());



  std::unique_ptr<FrontendActionFactory> FrontendFactory;

  // Choose the correct factory based on the selected mode.
  if (ASTDump)
    FrontendFactory = newFrontendActionFactory<FindNamedClassAction>();

  //Tool.setPrintErrorMessage(true);
  //Tool.appendArgumentsAdjuster(
  //    clang::tooling::getInsertArgumentAdjuster("-ferror-limit=0"));

  return Tool.run(FrontendFactory.get());
}
#if 0
int main(int argc, char **argv) {
  if (argc > 1) {
    clang::tooling::runToolOnCode(std::make_unique<FindNamedClassAction>(),
                                  argv[1]);
  }
}
#endif
