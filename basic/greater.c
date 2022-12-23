#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=(a>b?a:b);
    printf("greater no is %d",c);
    return 0;
}