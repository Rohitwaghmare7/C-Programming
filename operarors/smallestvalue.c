#include<stdio.h>
int main()
{
    printf("find out the smallest one between a,b and c \n");
    printf("--------------------------------------------\n");

    int a,b,c;
    
    printf("enetr values for a,b and c : \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c)
    {
        printf("a is the smallest \n");
    }
    else if (b<a && b<c)
    {
        printf("b is the smallest \n");
    }
    else
    {
        printf(" c is the smallest \n");
    }
    return 0;
}