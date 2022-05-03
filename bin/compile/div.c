#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int my_sub(int, int);
static int my_div1(int a, int b){
    int r = 0;
    if (a < b){
        return 0;
    }

    if (b == 0){
        return 0;
    }
    do
    {
        a = my_sub(a, b);
        r++;
    } while (a>=b);
    
    printf("my_div1: %d\n", r);
    return r;
}

static int my_div2(int a, int b){
    
    printf("my_div2: %d\n", a/b);
    return a/b;
}

static void *resolve_my_div(void)
{
    srand((unsigned)time(NULL));
    int r = rand() % 10;
    if(r < 5){
        return my_div1;
    }
    else{
        return my_div2;
    }
}

int my_div(int a, int b) __attribute__ ((ifunc ("resolve_my_div")));

