#include <stdio.h>

int main(int argc, char const *agrv[])
{
    // int a = 3;
    // int* ptra = &a;

    // printf("%d\n", ptra);

    // ptra++;
    // printf("%d\n", ptra);    
    // printf("%d\n", ptra-2);    

    int arr[12] = {0,1,2,3,4,5,6,7};
    // If arr[i] is an array, than arr is the pointer to arr[0]

    printf("%d\n", &arr[1]);
    printf("%d\n", arr + 1);

    printf("%d\n", arr[1]); // OR printf("%d\n", *(&arr[1]));
    printf("%d\n", *(arr + 1));

    return 0;
}