#include <stdio.h>

char* welcome() {
    int n;
    scanf("%d",&n);
    printf("You entered: %d",n);
}

int main() {
    printf("%d", welcome());
    return 0;
}