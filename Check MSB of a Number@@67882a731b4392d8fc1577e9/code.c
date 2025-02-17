#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num & (1<<31) != 0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}