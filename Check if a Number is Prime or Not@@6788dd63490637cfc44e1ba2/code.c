int isprime(int n){
    if(n<=1){
        printf("Not Prime");
    }
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    if(isprime(n)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}