#include <stdio.h>


#include <stdio.h>

int main() {
    int a, b;
    char ch;

    // Read two integers
    scanf("%d %d", &a, &b);
    
    // Read operator with space before %c to handle leftover newline
    scanf(" %c", &ch);  // The space before %c ensures it reads the correct character

    // Perform calculation based on operator
    if (ch == '+') {
        printf("%d", a + b);
    }
    else if (ch == '-') {
        printf("%d", a - b);
    }
    else if (ch == '*') {
        printf("%d", a * b);
    }
    else if (ch == '/') {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("Error! Division by zero.");
        }
    } else {
        printf("Invalid operator!");
    }

    return 0;
}
