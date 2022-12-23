#include<stdio.h>
int main()
{
    int no[5],i;

    printf("\nenter a number");

    for(i=0;i<5;i++)
    {
        scanf("%d",&no[i]);
    }
    printf("\ndisplay no");
    for(i=0;i<5;i++)
    {
        printf("%d",no[i]);
    }
    printf("\n");
}