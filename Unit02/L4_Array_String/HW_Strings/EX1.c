// C Program to find the frequency of characters in a string

#include <stdio.h>

int main(){
    int i, counter = 0;
    char target, str[50];
    printf("Enter string: ");
    gets(str);
    printf("Enter character to find frequency: ");
    scanf("%c", &target);
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == target){
            counter++;
        }
    }
    printf("Frequency of %c = %d", target, counter);
    return 0;
}