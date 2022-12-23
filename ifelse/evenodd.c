#include<stdio.h>
int main()
{   
    printf("\nfind out the given number is even or odd\n");
    printf("------------------------------------------\n");

    int a;

    printf("enter the value of a :");
    scanf("%d",&a);

    if(a % 2 == 0)
    {
        printf("the given number is even");
    }
    else
    {
        printf("the given number is odd");
    }
    return 0;

}