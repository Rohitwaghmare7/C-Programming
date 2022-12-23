#include<stdio.h>
int main()
{
    int maths,physics,chemistry,biology,english,total;
    float per;

    printf("enter marks of 5 subjects :");
    scanf("%d%d%d%d%d",&maths,&physics,&chemistry,&biology,&english);

    total=maths+physics+chemistry+biology+english;12

    printf("total is %d :",total);

    per=total/5;

    printf("percentage is %f:",per);
}