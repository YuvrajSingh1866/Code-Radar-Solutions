#include <stdio.h>

int main(){
    int s1,s2,b;
    scanf("%d %d %d",&s1,&s2,&b);
    if(b>2 && s1>2 && s2>2){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

}