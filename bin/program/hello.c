#include <stdio.h>
//gcc -g -fcf-protection=none -o hello hello.c
//gcc -g -no-pie -fcf-protection=none -Wl,-z,now -o hello hello.c
void hello(void)
{
    printf("Hello, World!\n");
}

int main(int argc, char **argv)
{
    hello();
    return 0;
}