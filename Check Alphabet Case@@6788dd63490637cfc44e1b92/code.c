#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(toupper(ch)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}