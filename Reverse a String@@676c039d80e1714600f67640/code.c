#include<stdio.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int count = 0;
    for(i=s[0];i!='\0';i++){
        count++;
    }
    for(int i=s[count-1];i>=0;i--){
        printf("%s",s);
    }

}