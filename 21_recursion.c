#include <stdio.h>

int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}

int main(int argc, char const *agrv[])
{

    int num;

    printf("Enter the number\n");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, fact(num));
    return 0;
}