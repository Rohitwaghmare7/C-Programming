#include<stdio.h>
int main()
{
    int l,b,perimeter,area;
    printf("enter the values of length and beradth of rectangle:");
    scanf("%d%d",&l,&b);
    perimeter=2*b+2*l;
    area=l*b;
    printf("\nthe perimeter of rectangle is %d",perimeter);
    printf("\nthe area of the reactangle is %d",area);
    getch();



}
