#include <stdio.h>

void convert(int val)
{
    char opt;
    printf("Choose the below option:- \na. km to miles. \nb. inches to foot. \nc. cm to inches.\n");
    scanf(" %c", &opt);

    switch (opt)
    {
    case 'a':
        printf("\n%d kms is equal to %f miles\n\n", val, val * 0.621371);
        break;
    case 'b':
        printf("\n%d inches is equal to %f foot\n\n", val, (float)val / 12);
        break;
    case 'c':
        printf("\n%d cms is equal to %f inches\n\n", val, (float)val / 2.54);
        break;
    default:
        printf("Choose the correct option\n");
    }
}

int main(int argc, char const *agrv[])
{
    int val;
    char con;

label:
    printf("Enter the amount of value to convert\n");
    scanf("%d", &val);

    convert(val);

cont:
    printf("Do you wish to continue? \nY. Yes. \nN. No.\n");
    scanf(" %c", &con);

    if (con == 'Y')
    {
        goto label;
    }
    else if (con == 'N')
    {
        printf("Goodbye Sir");
    }
    else
    {
        printf("Choose the correct option\n");
        goto cont;
    }

    return 0;
}