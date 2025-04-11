#include<stdio.h>
int main(){
    char s[1000];
    scanf("%s",s);
    for(char i='\0';i>=s;i--){
        printf("%s",s);
    }
}