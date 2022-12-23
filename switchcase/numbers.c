#include<stdio.h>
int main()
{
    printf(" print numbers using switch case \n");
    printf("---------------------------------\n");
    
    int n;

    printf("enter value for n : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("\none");
        break;
    
    case 2:
        printf("\ntwo");
        break;

    case 3:
        printf("\nthree");
        break;
    
    default:
        printf("number is invalid");
        break;
    }
    return 0;
}
