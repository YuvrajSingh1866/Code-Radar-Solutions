#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int bitwise_x = a<<b;
    printf("%d",bitwise_x);
}