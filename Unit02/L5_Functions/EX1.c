// C program to print prime numbers between two intervals

#include <stdio.h>
#include <math.h>

int checkPrime(int x);

int main(){
    int start, end;
    printf("Enter start of interval: ");
    scanf("%d", &start);
    printf("Enter end of interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    for(int i=start; i<=end; i++){
        if(checkPrime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}

int checkPrime(int x){
    for(int i=2; i<=sqrt(x); i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}