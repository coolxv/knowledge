#include<stdio.h>
#include<stdlib.h>
int my_add(int, int);
int my_sub(int, int);
int my_mul(int, int);
int my_div(int, int);

void my_all(int a, int b){
    printf("all: %d  %d  %d  %d\n",my_add(a,b),my_sub(a,b),my_mul(a,b),my_div(a,b));
    return ;
}
const char my_interp[] __attribute__((section(".interp"))) = "/lib64/ld-linux-x86-64.so.2";
void my_main(int argc, char *argv[], char *envp[]){

    int a=10, b=2;

    my_all(a, b);
    exit(0);

}