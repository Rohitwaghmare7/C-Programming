#include<stdio.h>
int main()
{
    int x[4];
    int i;

    for(i=0;i<4;i++)
    {
        printf("&x[%d] = %p \n", &x[i]);
    }
    printf("add of array x = %u",x);
}