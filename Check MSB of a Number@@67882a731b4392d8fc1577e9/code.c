#include<stdio.h>
int main(){
    int num;n;
    scanf("%d %d",&num,&n);
    int ans=num & (1<<31)!=0;
    printf("%d",ans);
}