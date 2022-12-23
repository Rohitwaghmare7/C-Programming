#include<stdio.h>
int main()
{
    int i,k,row,blank;
    printf("enter number of rows");
    scanf("%d",&row);
    blank=row;
    for(i=1;i<=row;i++)
    {
        for(k=1;k<blank;k++)
        {
            printf(" ");
            blank--;
            for(k=1;k<=2*1;k++)
            {
                printf("*");
                printf("\n");

            }
        }
    }
    return 0;
}