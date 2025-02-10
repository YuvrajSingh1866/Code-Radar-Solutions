#include<stdio.h>
int prime(int n){
    int count=0;
    if (n<=1){
        printf("Not prime");
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                count++;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if(prime(n)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
