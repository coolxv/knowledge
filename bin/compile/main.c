#include <stdio.h>
#include <string.h>
 #include <stdlib.h>
#ifndef PIE
#include <dlfcn.h> 
#endif

void my_all(int a, int b);


#ifdef BSYM
int my_sub(int a, int b){
    printf("main my_sub: %d\n", a-b);
    return a-b;
}
#endif


#ifdef WRAP
asm(".symver memcpy, memcpy@GLIBC_2.2.5");


void* __real_malloc(size_t size); // 只声明不定义__real_malloc
void* __wrap_malloc(size_t size) // 定义__wrap_malloc
{
    printf("__wrap_malloc called, size:%zd\n", size); // log输出
    return __real_malloc(size); // 通过__real_malloc调用真正的malloc
}

#endif

int main(int argc, char *argv[], char *envp[]){

#ifdef WRAP
int w = 225, wt=0;
memcpy(&wt, &w, sizeof(int));
printf("memcpy@GLIBC_2.2.5: %d\n", wt);

char* c = (char*)malloc(sizeof(char)); 
printf("c = %p\n", c);
free(c); 
#endif

#ifndef PIE
    void *handle;
    void (*my_all)(int, int);
    if(argc > 1){
        handle = dlopen("./libop.so", RTLD_LAZY|RTLD_DEEPBIND);
    }
    else{
        handle = dlopen("./libop.so", RTLD_LAZY);
    }
    my_all = (void (*)(int, int))dlsym(handle, "my_all");
#endif
    int a=10, b=2;
    my_all(a, b);
#ifndef PIE
    dlclose(handle);
#endif
    return 0;
}