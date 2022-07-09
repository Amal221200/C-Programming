#include <stdio.h>

int main(int argc, char const *argv[])
{
    // gcc -Wall -save-temps .\add.c -o add
    int a, b;

    printf("Enter the value for a\n");
    scanf("%d", &a);

    printf("Enter the value for b\n");
    scanf("%d", &b);

    printf("Sum of a and b is %d", a + b);
    
    return 0;
}
