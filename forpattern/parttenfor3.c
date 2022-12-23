#include<stdio.h>
int main()
{
    int i,j,k,l=0;
    printf("enter numner of rows");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        for(k=1;k<=i;k++)
        {
            l++;
            printf("%3d",l);
        }
        printf("\n");
    }
    return 0;
}