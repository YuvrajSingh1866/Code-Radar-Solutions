#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<=n;i++){
        count++;
    }
    printf("%d",count);
}