#include <stdio.h>
#include <limits.h>

int main(){
    float x;
    float y;
    float z;
    float max = INT_MIN;
    printf("Enter three numbers: \n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    if(x > max) max = x;
    if(y > max) max = y;
    if(z > max) max = z;
    printf("Largest number: %f", max);
    return 0;
}