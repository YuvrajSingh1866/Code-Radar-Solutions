#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(&arr[i],&arr[i+1]);
        }
    }
}
void ask(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    ask(arr,n);
    sort(arr,n);
    print(arr,n);
    
}