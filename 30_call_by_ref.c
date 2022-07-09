#include <stdio.h>

void swap (int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char const *agrv[])
{
    int a = 40, b = 100;

    printf("Value of a and b is %d and %d\n", a, b);

    swap(&a, &b);

    printf("Value of a and b is %d and %d\n", a, b);
        
    return 0;
}