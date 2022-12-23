#include<stdio.h>
int main()
{
    printf("\nfind out biggest value between a and b\n");
    printf("------------------------------------------\n");

    int a,b;

    printf("enter value for a and b : ");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
        printf("a = %d is the biggest value ",a);
    }
    else
    {
        printf("b = %d is the biggest value",b);
    }
    return 0;
}