#include <stdio.h>

int main() {
    // Variables to store the three sides of the triangle
    float side1, side2, side3;

    // Input from the user
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    // Check if the triangle is valid
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}

