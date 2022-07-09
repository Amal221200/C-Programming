#include <stdio.h>

int main(int argc, char const *agrv[])
{

    label:
        printf("Hello World");
        goto end;
        
    goto label;
    end:
        printf("\n");

    return 0;
}