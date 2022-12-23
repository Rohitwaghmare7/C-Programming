#include<stdio.h>
int main()
{
    int a;
    a=(2<3)&&(4>3);
    printf("(2<3)&&(4>3)=%d",a);
    a=(2<1)&&(4<3);
    printf("\n(2<1)&&(4<3)=%d",a);
    getch();

}