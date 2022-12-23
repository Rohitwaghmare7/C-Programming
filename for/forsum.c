#include<stdio.h>
int main()
{
    int number,a,sum=0;
    printf("enter a positive number:");
    scanf("%d",&number);
    for(a=1;a<=number;a++)
    {
        sum+=a;
    }
    printf("sum=%d",sum);
    return 0;

}