#include <stdio.h>

int main(){
    int arr[100], n, i, location, element;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be inserted: ");
    scanf("%d", &element);
    printf("Enter location: ");
    scanf("%d", &location);
    for(i = n; i>=location; i--){
        arr[i] = arr[i-1];
    }
    n++;
    arr[location-1] = element;
    printf("Array after insertion:\n");
    for(i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}