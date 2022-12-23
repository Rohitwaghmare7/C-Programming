#include<stdio.h>
int main()
{
    int i,j,c;
    printf("enter numner of rows");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        for(c=1;c<=i;c++)
        {
          printf("%c",c+64);
        }
    printf("\n");
    }
    return 0;
}