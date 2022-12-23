#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enetr number of rows :");
    scanf("%d",&k);

    for(i=0;i<=k;i++)
    {
        for(j=0;j<k;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
        k--;
    }
    return 0;
}