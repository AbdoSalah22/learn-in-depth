// C program to reverse a sentence using recursion

#include <stdio.h>

void reverse();

int main(){
    printf("Enter sentence: ");
    reverse();
    return 0;
}

void reverse(){
    char c;
    scanf("%c", &c);
    if(c != '\n'){
        reverse();
        printf("%c", c);
    }
}