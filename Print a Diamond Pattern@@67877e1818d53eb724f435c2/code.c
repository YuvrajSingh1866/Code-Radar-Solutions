#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int r=n-1;r>=1;r--){
        for(int c=1;c<n-r;c++){
            printf(" ");
        }
        for(int c=1;c<=(2*r-1);c++){
            printf("* ");
        }
        printf("\n");
    }
}