#include <stdio.h>

int main(){
    int n;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0){
        printf("Error!!! Factorial of negative does not exist");
        return 0;
    }
    else if (n == 0){
        printf("Factorial: %d", 1);
        return 0;
    }
    else{
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Factorial: %d", factorial);
    return 0;
    }
}