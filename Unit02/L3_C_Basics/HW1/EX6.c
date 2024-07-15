#include <stdio.h>

int main(){
    float x;
    float y;
    float temp;
    printf("Enter value of x: \n");
    scanf("%f", &x);
    printf("Enter value of y: \n");
    scanf("%f", &y);
    temp = x;
    x = y;
    y = temp;
    printf("Value of x after swapping: %f\n", x);
    printf("Value of y after swapping: %f\n", y);
    return 0;
}