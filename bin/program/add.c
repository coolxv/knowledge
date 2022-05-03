#include <stdio.h>
#include <stdlib.h>
//gcc -g -shared -fPIC add.c -o libadd.so
int lib_var = 42;
int lib_add(int a, int b) {
    return a + b;
}
void lib_atexit1();
void lib_atexit2();

void lib_init() {
    printf("lib %s\n", __FUNCTION__);
    atexit(lib_atexit1);
    atexit(lib_atexit2);
}

void lib_fini() {
    printf("lib %s\n", __FUNCTION__);
}

// .preinit_array section is not allowed in DSO
__attribute__((section(".init_array"))) typeof(lib_init) *__init = lib_init;
__attribute__((section(".fini_array"))) typeof(lib_fini) *__fini = lib_fini;

void  __attribute__ ((constructor(101))) lib_constructor101() {
    printf("lib %s\n", __FUNCTION__);
}
void  __attribute__ ((constructor(102))) lib_constructor102() {
    printf("lib %s\n", __FUNCTION__);
}
void __attribute__ ((destructor(101))) lib_destructor101() {
    printf("lib %s\n", __FUNCTION__);
}
void __attribute__ ((destructor(102))) lib_destructor102() {
    printf("lib %s\n", __FUNCTION__);
}
void lib_atexit1() {
    printf("lib %s\n", __FUNCTION__);
}

void lib_atexit2() {
    printf("lib %s\n", __FUNCTION__);
}

