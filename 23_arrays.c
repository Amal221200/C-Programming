#include <stdio.h>

int main(int argc, char const *agrv[])
{
    int arr[6] = {0, 1, 2, 3, 4};
    int arr1[2][6] = {{0, 1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10}};

    // arr[0] = 3;
    // arr[1] = 3;
    // arr[2] = 4;
    // arr[3] = 4;
    // arr[6] = 7;

    // printf("%d\n",arr[2]);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
        // for (int j = 0; j < 6; j++)
        // {
        //     printf("%d ", arr1[i][j]);
        // }
        // printf("\n");
    }
    // printf("%d\n", arr[5]);
    return 0;
}