#include<stdio.h>
int main()
{
    printf("find out  given number is positive or negetive \n");
    printf("\n---------------------------------------------\n");

    int n;

    printf("enetr a number : ");
    scanf("%d",&n);

    if(n>=0)
    {
        printf("a = %d  is a positive number",n);
    }
    else
    {
        printf("a = %d is a negative number",n);
    }
    return 0;
}