#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("31");
        break;
        case 2:
        printf("28");
        break;
        case 3:
        printf("31");
        break;
    }
}
