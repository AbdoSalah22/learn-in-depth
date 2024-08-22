// C Program to reverse a string

#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    char str[50], rev[50], temp;
    printf("Enter string: ");
    gets(str);
    j = strlen(str) - 1;
    for(i=0; i < j; i++){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    printf("Reversed string: %s", str);
    return 0;
}