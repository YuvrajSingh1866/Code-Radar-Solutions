#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to create the mirrored right angle triangle pattern
    for (i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
