#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int lsb=n&1;
    printf("%d",lsb);
}