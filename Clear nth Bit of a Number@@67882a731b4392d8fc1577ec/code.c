#include<stdio.h>
int main(){
    int num;
    int n;
    scanf("%d %d",&num,&n);
    int ans = num ~ (1<<n);
    printf("%d",ans);
}// Your code here...