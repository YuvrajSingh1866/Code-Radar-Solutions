#include <stdio.h>

int main() {
    int i, j, rows;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
    for(i = 1; i <= rows; i++) {
        // Print spaces for the left side of the pyramid
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        
        // Print stars for the pyramid shape
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

