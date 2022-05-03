#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int my_add(int, int);

static int my_mul1(int a, int b){
    int r = 0;
    for(int i = 0; i < b; i++){
        r = my_add(r, a);
    }
    printf("my_mul1: %d\n",r);
    return r;
}


static int my_mul2(int a, int b){

    printf("my_mul2: %d\n",a*b);
    return a*b;
}

static void *resolve_my_mul(void)
{
    srand((unsigned)time(NULL));
    int r = rand() % 10;
    if(r < 5){
        return my_mul1;
    }
    else{
        return my_mul2;
    }
}

int my_mul(int a, int b) __attribute__ ((ifunc ("resolve_my_mul")));