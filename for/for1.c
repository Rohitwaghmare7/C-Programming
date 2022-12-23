#include<stdio.h>
int main()
{
    int number,i;
    printf("enter a number");
    scanf("%d",&number);
    for(i=0;i<=number;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}