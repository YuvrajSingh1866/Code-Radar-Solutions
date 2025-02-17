#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    if(num & (1<<31) != 0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}