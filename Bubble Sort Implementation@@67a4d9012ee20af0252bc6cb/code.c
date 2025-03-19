#include<stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void result(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            swap(&arr[i],&arr[j]);
        }
    }
}
void askarray(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    askarray(arr,n);
    result(arr,n);
    printarray(arr,n);
        
}