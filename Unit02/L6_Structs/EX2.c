// C Program to add two distances in inch-feet system using structs

#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2);

int main() {
    struct Distance d1, d2, result;

    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inches: ");
    scanf("%d", &d1.inches);

    printf("Enter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inches: ");
    scanf("%d", &d2.inches);

    result = addDistances(d1, d2);
    printf("Sum of distances = %d feet %d inches\n", result.feet, result.inches);

    return 0;
}

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;

    if (result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches = result.inches % 12;
    }

    return result;
}