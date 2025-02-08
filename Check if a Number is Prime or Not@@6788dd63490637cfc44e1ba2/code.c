#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    if (n <= 1){
        printf("Not Prime");
    }
    else{
        if(n%2!=0){
            printf("Prime");
        }
    }
}