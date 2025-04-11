#include<stdio.h>
int main(){
    char s[1000];
    scanf("%s",s);
    for(char i='\0';i>=s[0];i--){
        printf("%s",s);
    }
}