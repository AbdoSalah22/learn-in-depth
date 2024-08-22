#include <stdio.h>

int main(){
    double arr[100], x, sum=0, average;
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%lf", &x);
        arr[i] = x;
        sum += x;
    }
    average = sum / n;
    printf("%lf", average);
    
    return 0;
}