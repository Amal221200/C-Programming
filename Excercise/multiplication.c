#include <stdio.h>

void mul(int num, int multiplier)
{
    

    printf("Table of %d:\n", num);
    for (int i = 1; i <= multiplier; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main(int argc, char const *argv[])
{
    int num, multiplier;
    printf("Enter the number you want the multiplication table of:\n");
    scanf("%d", &num);

    printf("Enter the multipler:\n");
    scanf("%d", &multiplier);

    mul(num, multiplier);

    return 0;
}
