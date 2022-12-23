#include<stdio.h>
int main()
{
    const int maxinput=100;
    int i;
    double number,avg,sum=0.0;

    for(i=1;i<=maxinput;i++)
    {
        printf("%d enter a number\n",i);
        scanf("%lf",&number);
        if(number<0.0)
        {
            goto jump;
        }
        sum+=number;
    }
    jump:
    avg=sum/(i-1);
    printf("sum=%.2lf\n",sum);
    printf("avg=%.2lf\n",avg);
    return 0;

}
