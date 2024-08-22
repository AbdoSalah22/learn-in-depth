// C program to calculate factorial using recursion

#include <stdio.h>

int factorial(int x);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}

int factorial(int x){
    if(x == 1){
        return 1;
    }
    return x * factorial(x-1);
}