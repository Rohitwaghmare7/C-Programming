#include<stdio.h>
int main()
{
    int i,x[4],sum=0;

    for(i=0;i<4;i++)
    {
        scanf("%d",x+i);
        sum += *(x+i);
    }
    printf("sum = %d",sum);
    return 0;
}