#include <stdio.h>

int main(){
    char c;
    printf("Enter an character: ");
    scanf("%c", &c);
    if (c >= 'A'
    && c <= 'z'){
        printf("%c is an alphabet", c);
    }
    else{
        printf("%c is not an alphabet", c);
    }
    return 0;
}