#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(Toupper(ch)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}