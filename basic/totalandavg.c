#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6;
    int t;
    float a;

    s1=10;
    s2=20;
    s3=30;
    s4=40;
    s5=50;
    s6=60;

    t=s1+s2+s3+s4+s5+s6;
    a=t/6;

    printf("\nthe total of subjects are : %d ",t);
    printf("\nthe avg os subject are : %f ",a);

    return 0;

}