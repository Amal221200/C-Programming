#include <stdio.h>
 
int main(int argc, char const *agrv[])
{
    int math, science;
    printf("Enter the marks you obtained from Maths\n");
    scanf("%d", &math);

    printf("Enter the marks you obtained from Science\n");
    scanf("%d", &science);

    if (math >= 20 && science >= 20)
    {
        printf("Congrajulations you got $45\n");
    }
    else if (math >= 20 || science >= 20)
    {
        printf("Congrajulations you got $20\n");
    }
    else {
        printf("You failed\n");
    }
    

    return 0;
}