#include <stdio.h>

typedef union Student
{
    char name[100];
    int id;
    int mark;
} Student;

int main(int argc, char const *agrv[])
{

    Student Amal;
    Amal.id = 123;
    Amal.mark = 23;

    printf("%d\n", Amal.id);
    printf("%d\n", Amal.mark);

    return 0;
}