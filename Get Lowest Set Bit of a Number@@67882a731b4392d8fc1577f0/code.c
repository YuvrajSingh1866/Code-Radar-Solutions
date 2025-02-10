#include <stdio.h>

int getLowestSetBit(int number) {
    return number & -number;  // Bitwise trick to get the lowest set bit
}

int main() {
    int number;

    // Input: Number from the user
    scanf("%d", &number);

    // Get the lowest set bit and display the result
    int lowestSetBit = getLowestSetBit(number);
    printf("%d\n", number, lowestSetBit);

    return 0;
}
