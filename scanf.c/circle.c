#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("enter the radius of the circle");
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("\nthe diameter of the circle is %f",d);
    printf("\nthe circumferance of the circle is %f",c);
    printf("\nthe area of the circle is %f",a);
    getch();


}