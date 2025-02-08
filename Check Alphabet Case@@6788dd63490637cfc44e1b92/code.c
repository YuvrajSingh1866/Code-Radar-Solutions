#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase");
    }
    if(islower(ch)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}