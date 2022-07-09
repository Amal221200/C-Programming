#include <stdio.h>

int fibb_rec(int num)
{
    if (num == 1 || num == 2)
    {
        return num - 1;
    }
    else
    {
        return fibb_rec(num - 1) + fibb_rec(num - 2);
    }
}

int fibb_it(int num)
{
    int a = 0, b = 1;
    for (int i = 1; i < num - 1; i++)
    {
        b = b + a;
        a = b - a;
    }
    return a;
}

int main(int argc, char const *agrv[])
{
    int num;

    printf("Enter the number you want the series to generate\n");
    scanf("%d", &num);

    printf("The value of fibbonacci number at position %d using recursive approach is %d\n", num, fibb_rec(num));

    printf("The value of fibbonacci number at position %d using iterative approach is %d\n", num, fibb_it(num));

    return 0;
}