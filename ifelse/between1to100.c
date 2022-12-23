#include<stdio.h>
int main()
{
    int a;

    printf("enter value for a : ");
    scanf("%d",&a);

    if (a>=1)
    {
        if (a<=100)
        {
            printf("the value of a is between 1 to 100");
        }
    }
    else
    {
        printf("the value of a is not between 1 to 100");
    }
    return 0;
}