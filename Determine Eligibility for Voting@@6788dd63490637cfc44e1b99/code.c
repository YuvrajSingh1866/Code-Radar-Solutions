#include <stdio.h>

int main() {
    int age;

    // Take input for the age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18) {
        printf("eligible\n");
     } else {
        printf("Not eligible\n");
    }

    return 0;
}
