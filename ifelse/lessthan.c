#include<stdio.h>
int main()
{   
    printf("find ouut a is less than 100 or not\n");
    printf("-----------------------------------\n");


    int a,b;

    printf("enetr the value for a : ");
    scanf("%d",&a);

    if(a<100)
    {
        printf(" a is less then 100");
    }
    else
    {
      printf("a is greateer than 100");
    }
    return 0;
}