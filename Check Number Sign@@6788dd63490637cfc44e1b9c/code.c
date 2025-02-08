#include <stdio.h>

int main() {
    int num;

    // Take input for the numbe
    scanf("%d", &num);

    // Check whether the number is positive, negative, or zero
    if (num > 0) {
        printf("Positive.\n");
    } else if (num < 0) {
        printf("Negative.\n");
    } else {
        printf("Zero.\n");
    }

    return 0;
}
