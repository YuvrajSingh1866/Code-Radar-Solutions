#include <stdio.h>

int main(){
    int n,bit;
    scanf("%d" "%d",&n,&bit);
    int nth = (n>>bit)&1;
    printf("%d",nth);
}