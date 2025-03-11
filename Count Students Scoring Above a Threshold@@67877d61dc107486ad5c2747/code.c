#include <stdio.h>

struct Student{
    int rollNumber;
    char name[50];
    float marks;
};

int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    float threshold;
    struct Student students[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f",&st