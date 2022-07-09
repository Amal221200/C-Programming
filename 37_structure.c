#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct Student
{
    int id;
    int marks;
    char name[20];
} Student;

int main(int argc, char const *agrv[])
{
    Student Amal;
    Amal.id = 124; // OR struct Student Amal = {123, 60, "Amal"};
    // Amal.marks = 0;
    // strcpy(Amal.name, "Amal");

    printf("Enter your id\n");
    scanf("%d", &Amal.id);
    printf("Enter your name\n");
    scanf(" %s", &Amal.name); // But this doesn't read after the space

    printf("Your id is %d\n", Amal.id);
    printf("Your name is %s\n", Amal.name);
    
    getch();
    return 0;
}