#include <stdio.h>
#include <stdlib.h>
#include <sys/auxv.h>


//gcc -g -o initfini initfini.c -ladd -L. -Wl,-rpath=.

void preinit(int argc, char **argv, char **envp) {
 printf("%s\n", __FUNCTION__);
}

void init(int argc, char **argv, char **envp) {
 printf("%s\n", __FUNCTION__);
}

void fini() {
 printf("%s\n", __FUNCTION__);
}

__attribute__((section(".init_array"))) typeof(init) *__init = init;
__attribute__((section(".preinit_array"))) typeof(preinit) *__preinit = preinit;
__attribute__((section(".fini_array"))) typeof(fini) *__fini = fini;

void  __attribute__ ((constructor(101))) constructor101() {
 printf("%s\n", __FUNCTION__);
}
void  __attribute__ ((constructor(102))) constructor102() {
 printf("%s\n", __FUNCTION__);
}
void __attribute__ ((destructor(101))) destructor101() {
 printf("%s\n", __FUNCTION__);
}
void __attribute__ ((destructor(102))) destructor102() {
 printf("%s\n", __FUNCTION__);
}
void my_atexit1() {
 printf("%s\n", __FUNCTION__);
}

void my_atexit2() {
 printf("%s\n", __FUNCTION__);
}
int lib_add(int a, int b);

int main(int argc, char **argv, char **envp) {
    printf("%d\n", lib_add(1, 2));
#if 0
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    // 打印辅助变量或者LD_SHOW_AUXU=1
    void *entry = (void *)getauxval(AT_ENTRY);
    printf("the entry of the process is: 0x%p\n", entry);
    long clock = getauxval(AT_CLKTCK);
    printf("the clktck is: %ld\n", clock);
    void *base_addr = (void *)getauxval(AT_BASE);
    printf("the base address is: 0x%p\n", base_addr);
    long data_cache_block_size = getauxval(AT_DCACHEBSIZE);
    printf("the data cache block size is: %ld\n", data_cache_block_size);
    char *pathname = (char *)getauxval(AT_EXECFN);
    printf("the path of the process running is: %s\n", pathname);
    long pagesize = (long)getauxval(AT_PAGESZ);
    printf("the page size of the process is: %ld\n", pagesize);
    void *vdso_entry = (void *)getauxval(AT_SYSINFO);
    printf("the vdso entry is: 0x%p\n", vdso_entry);
    void *vdso_ehdr = (void *)getauxval(AT_SYSINFO_EHDR);
    printf("the vdso ehdr is: 0x%p\n", vdso_ehdr);
    // 打印环境变量
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    for (int i = 0; envp[i] != NULL; i++) {
        printf("%s\n", envp[i]);
    }
    //打印命令行参数
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    for (int i = 0; argv[i] != NULL; i++) {
        printf("%s\n", argv[i]);
    }
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
#endif
    atexit(my_atexit1);
    atexit(my_atexit2);
    printf("main return\n");
    return 0;
}