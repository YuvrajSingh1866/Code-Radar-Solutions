#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    // Check if the given sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check if it's an equilateral triangle
        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        // Check if it's an isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        }
        // Otherwise, it's a scalene triangle
        else {
            printf("Scalene\n");
        }
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}
