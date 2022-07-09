#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarPattern(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(int argc, char const *agrv[])
{
    int rows;
    char opt;
    printf("Enter a number\n");
    scanf("%d", &rows);

    printf("1. Normal. \n2. Reverse. \n");
    scanf(" %c", &opt);

    printf("===========================\n\n");

    switch (opt)
    {
    case '1':
        starPattern(rows);
        break;

    case '2':
        reversestarPattern(rows);
        break;
    }

    return 0;
}