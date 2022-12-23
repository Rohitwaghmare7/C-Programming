#include<stdio.h>
int main()
{
    printf("find out n is between 1 to 100 or not \n");
    printf("---------------------------------------\n");

    int n;

    printf("enetr value for n : ");
    scanf("%d",&n);

    if(n>=1 && n<=100)
    {
        printf("n is between 1 to 100 \n");
    }
    else
    {
        printf("n is not in between 1 to 100 \n");
    }
    return 0;
}
