#include<stdio.h>

int bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;
}