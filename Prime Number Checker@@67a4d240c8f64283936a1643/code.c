#include<stdio.h>
#include<stdbool.h>

bool isprime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int n;
    scanf("%d", &n); // Input number limit
    
    for (int i = 0; i <= n; i++) {
        if (isprime(i)) { // Check if the current number is prime
            printf("%d\n", i); // Print the prime number
        }
    }
    return 0;
}