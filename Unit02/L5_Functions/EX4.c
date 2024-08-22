// C program to calculate power of a number

#include <stdio.h>

int power(int b, int e);

int main(){
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("%d^%d = %d", base, exp, power(base, exp));
    return 0;
}

int power(int b, int e){
    if(e == 0){
        return 1;
    }
    return b * power(b, e-1);
}