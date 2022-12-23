#include<stdio.h>
int main()
{
    double n,sum = 0;

    do
    {
        printf("enetr a number : ");
        scanf("%lf",&n);
        sum += n;
    }
     while (n != 0);
     {
         printf("sum = %2lf",sum);
     }
     return 0;
}