#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n) {
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

