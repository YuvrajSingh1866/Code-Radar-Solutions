#include <stdio.h>

int main() {
    int num;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is not greater than 0 using the ! operator
    if (!(num > 0)) {
        printf("False");
    } else {
        printf("True");
    }

    return 0;
}