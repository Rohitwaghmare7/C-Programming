#include<stdio.h>
#include<math.h>
int main()
{
    int n1,onum,r,result=0,n=0;
    printf("cheak weather the number is armstrong no");
    printf("---------------------------------------\n");

    printf("enter a number");
    scanf("%d",&n1);

    onum = n1;
    while(onum!=0)
    {
        onum/=10;
        n++;
    }
    onum = n1;
    while(onum!=0)
    {
        r= onum%10;
        result += pow(r,n);
        onum/=10; 
    }
    if(result == n1)
    {
        printf("\nnumber is an armstrong number");
    }
    else
    {
        printf("\n it is not an armstrong number");
    }
    return 0;
}