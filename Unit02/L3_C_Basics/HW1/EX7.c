#include <stdio.h>

int main(){
    float x;
    float y;
    printf("Enter value of x: \n");
    scanf("%f", &x);
    printf("Enter value of y: \n");
    scanf("%f", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Value of x after swapping: %f\n", x);
    printf("Value of y after swapping: %f\n", y);
    return 0;
}