#include<stdio.h>

bool isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(isprime(i)){
            printf("%d\n",isprime(n));
        }
    }

}