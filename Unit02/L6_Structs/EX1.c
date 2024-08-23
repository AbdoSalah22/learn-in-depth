// C Program to store information of a student using Struct

#include <stdio.h>

struct SStudent{
    char name[40];
    int roll;
    float marks;
};

int main(){
    struct SStudent student;
    printf("Enter name: ");
    gets(student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("Displaying Information \n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}