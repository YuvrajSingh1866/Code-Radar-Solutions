#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(char i='A';i<='Z';i++){
        for(char j='A';j<='Z';j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}