#include <stdio.h>
#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Ask user for inpu
    scanf("%lf", &num1);
    scanf(" %c", &operator);  // Space before %c to capture any leftover newline character
    scanf("%lf", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case
    }
}