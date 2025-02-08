#include <stdio.h>

int main() {
    char vowel[6]={'a','e','i','o','u'};
    char consonant[24]="a,b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x,y,z";
    char ch;
    scanf("%d",&ch);
    if(ch==vowel){
        printf("Vowel");
    }
    else if(ch==consonant){
        printf("consonant");
    }
    else{
        printf("digit");
    }

}