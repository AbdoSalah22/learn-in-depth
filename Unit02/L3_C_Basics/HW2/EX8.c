#include <stdio.h>

int main(){
    float x;
    float y;
    char c;
    printf("Enter an operator (+ - * /): ");
    scanf("%c", &c);
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Enter another number: ");
    scanf("%f", &y);
    switch (c){
        case '+':
            printf("Result: %f", x+y);
            break;
        case '-':
            printf("Result: %f", x-y);
            break;
        case '*':
            printf("Result: %f", x*y);
            break;
        case '/':
            printf("Result: %f", x/y);
            break;
        default:
            printf("Error!!! Invalid Operator");
    }
    return 0;
}