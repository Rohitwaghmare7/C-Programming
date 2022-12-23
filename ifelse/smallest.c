#include<stdio.h>
int main()
{
    printf("\nfind out smallest value between a and b\n");
    printf("------------------------------------------\n");

    int a,b;

    printf("enter value for a and b : ");
    scanf("%d%d",&a,&b);
    
    if(a<b)
    {
        printf("a = %d is the smallest value ",a);
    }
    else
    {
        printf("b = %d is the smallest value",b);
    }
    return 0;
}