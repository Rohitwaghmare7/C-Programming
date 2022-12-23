#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter two numbers:");
    scanf("%d%d",&number1,&number2);
    if(number1==number2)
    {
        printf("result:%d=%d",number1,number2);

    }
    else if(number1>number2)
    {
        printf("%d>%d",number1,number2);
    }
    else
    {
        printf("%d<%d",number1,number2);
    }
    return 0;

}