#include <stdio.h>


int main()
{
    int num;

  
    scanf("%d", &num);

    /* If (num & 1) evaluates to 1 */
    if(num & 1)
        printf("set.");
    else
        printf("Not Set");

    return 0;
}