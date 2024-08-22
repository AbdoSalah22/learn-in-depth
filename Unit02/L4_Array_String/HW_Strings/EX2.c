// C Program to find the length of a string

#include <stdio.h>

int main(){
    int i;
    char str[50];
    printf("Enter string: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++){}
    printf("Length of string = %d", i);
    return 0;
}