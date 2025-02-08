#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18) {
        printf("eligible\n");
     } else {
        printf("Not eligible\n");
    }

    return 0;
}
