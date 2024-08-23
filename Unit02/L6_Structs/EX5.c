// C Program to find area of circle by passing arguments to macros

#include <stdio.h>

#define PI 3.14159
#define AREA_OF_CIRCLE(r) PI*r*r

int main(){
    double r;
    printf("Enter radius of circle: ");
    scanf("%lf", &r);
    printf("Area of circle: %.2lf", AREA_OF_CIRCLE(r));

    return 0;
}