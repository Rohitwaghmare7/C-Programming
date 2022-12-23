#include<stdio.h>
int main()
{
    int x,y;
    for(x=1;x<=80;x++)
    {
        goto x;y (x,1);printf("%c",196);
        goto x;y(x,24);printf("%c",196);
    }
    for(y=1;y<=24;y++)
    {
        goto x;y (1,y);printf("%c",119);
        goto x;y (80,y);printf("%c",196);
    }
    goto x;y(1,1);printf("%c",218);
    goto x;y(80,1);printf("%c",191);
    goto x;y(1,24);printf("%c",192);
    goto x;y(80,24);printf("%c",217);
    
    return 0;

}