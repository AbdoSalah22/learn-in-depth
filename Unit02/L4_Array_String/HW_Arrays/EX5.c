#include <stdio.h>

int main(){
    int arr[100], n, i, element;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number to be found: ");
    scanf("%d", &element);
    for(i = 0; i<n; i++){
        if(arr[i] == element){
            printf("Number found at index: %d", i);
            break;
        }
    }
    return 0;
}