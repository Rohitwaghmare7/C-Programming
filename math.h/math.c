#include<stdio.h>
#include<math.h>
int main()
{
    float a=0.5;
    int w,x,y,z;

    w=sin(a);
    x=cos(a);
    y=tan(a);
    z=pow(a,2);

    printf("%d%d%d%d\n",w,x,y,z);
    return 0;

}