#include <stdio.h>

void arr_rev(int *arr)
{
    int temp;
    for (int i = 0; i < 9; i++)
    {
        if (i > 4)
        {
            break;
        }
        temp = arr[i];
        arr[i] = arr[8 - i];
        arr[8 - i] = temp;
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    for (int i = 0; i < 9; i++)
    {
        printf("The value of array at %d is %d\n", i, arr[i]);
    }

    printf("The arr_rev function is called.\n");
    arr_rev(arr);

    for (int i = 0; i < 9; i++)
    {
        printf("The value of array at %d is %d\n", i, arr[i]);
    }
}