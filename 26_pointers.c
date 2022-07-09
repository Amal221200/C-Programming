#include <stdio.h>
 
int main(int argc, char const *agrv[])
{
    int a = 90;
    printf("The value of a is %d\n", a);
    printf("The address of a is %x\n", &a);

    int *ptra = &a;
    printf("The value of ptra is %p\n", ptra); // OR printf("The value of ptra is %x\n", ptra));
    printf("The address of ptra is %p\n", &ptra); // OR printf("The address of ptra is %x\n", &ptra));
    printf("The value of a by dereferencing ptra is %d\n", *ptra);


    int *ptr = NULL;

    return 0;
}