#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}