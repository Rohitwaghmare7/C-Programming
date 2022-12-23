#include<stdio.h>
int main()
{
    printf("find out if triangle is valid or not\n");
    printf("\n----------------------------------\n");

    int a,b,c;

    printf("enetr values for a,b and c :");
    scanf("%d%d%d",&a,&b,&c);

    if (a+b+c==180)
    {
        printf("triangle is valid\n");
    }
    else
    {
        printf("triangle is not valid");
    }
    return 0;
}