#include <stdio.h>
extern char _binary_strings_txt_start[];
extern char _binary_strings_txt_end[];


int main()
{
    printf("%s\n", _binary_strings_txt_start);

    printf("len=%ld\n", _binary_strings_txt_end - _binary_strings_txt_start);
    return 0;
}
