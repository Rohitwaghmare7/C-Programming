#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi;
    float mod;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    mod=a/b;
    printf("\nsum is %d",sum);
    printf("\nsub is %d",sub);
    printf("\nmulti is %d",multi);
    printf("\ndivision is %.2f",mod);
     return 0;

}