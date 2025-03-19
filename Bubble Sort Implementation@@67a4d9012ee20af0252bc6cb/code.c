#include<stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array in ascending order
void result(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

// Function to take array input
void askarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print the array
void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Added space for clarity
    }
    printf("\n");  // Added newline after printing the array
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    askarray(arr, n);

    result(arr, n);
    printarray(arr, n);

    return 0;
}