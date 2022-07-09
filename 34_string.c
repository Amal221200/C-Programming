#include <stdio.h>
#include <string.h>

int main(int argc, char const *agrv[])
{
    // char u_name[30] = {'A', 'm', 'a', 'l', 'a', '\0'};
    char name[15];

    printf("Enter your name\n");

    gets(name);

    printf("Welcome %s\n", name);
    // puts(name);
    return 0;
}