#include<stdio.h>
int main()
{
    int a,b,c;
    a=25;
    b=50;

    printf("\nbefore swap the value of a = %d and b = %d",a,b);

    c=a;
    a=b;
    b=c;

    printf("\nafter swap the value of a = %d and b = %d",a,b);

    return 0;
}