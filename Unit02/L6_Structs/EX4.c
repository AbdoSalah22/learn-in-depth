// C Program to store information of multiple students using Struct

#include <stdio.h>

#define NUM 5

struct SStudent{
    char name[40];
    int roll;
    int marks;
};

int main(){
    struct SStudent students[NUM];
    int i;

    for(i=0; i<NUM; i++){
        students[i].roll = i+1;
        printf("For roll number: %d\n", students[i].roll);
        printf("Enter name: ");
        gets(students[i].name);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
        fflush(stdin);
    }

    printf("\nDisplaying Information of Students:\n");
    for(i = 0; i < NUM; i++) {
        printf("\nInformation for roll number %d:\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d\n", students[i].marks);
    }
}