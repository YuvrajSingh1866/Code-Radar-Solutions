#include <stdio.h>

int main() {
    int num;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is not greater than 0 using the ! operator
    if (!(num > 0)) {
        printf("The number is not greater than 0.\n");
    } else {
        printf("The number is greater than 0.\n");
    }

    return 0;
}