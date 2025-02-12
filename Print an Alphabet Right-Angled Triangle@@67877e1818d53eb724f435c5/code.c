#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i='A';i<='Z';i++){
        for(int j='A';j<='Z';j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}