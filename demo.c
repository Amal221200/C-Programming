#include <stdio.h>

int main(int argc, char const *agrv[])
{
    int a = 6;
    int *p = &a;
    printf("%d\n", p);
    printf("%d\n", a);
    *p = 4;
    printf("%d\n", a);
    p++;
    printf("%d\n", p);
    printf("%d\n", &a);
    return 0;
}