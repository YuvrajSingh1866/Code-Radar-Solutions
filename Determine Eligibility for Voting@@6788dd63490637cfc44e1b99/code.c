#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18) {
        printf("Eligible\n");
     } else {
        printf("Not Eligible\n");
    }

    return 0;
}
