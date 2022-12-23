#include<stdio.h>
int main()
{
    float fh,cl;
    char ch;
    printf("\n\n press c to convert temp from fh to cl");
    printf("\n\n press f to convert temp from cl to fh");
    printf("\n\n enter your choice(c,f)");
    scanf("%c",&ch);
    if ((ch == 'c') || (ch == 'C'))
    {
        printf("enter temp in f");
        scanf("%f",&fh);
        cl=(fh-32)/1.8;
        printf("cl= %.2f",cl);
    }
    else if ((ch == 'f') || (ch == 'F'))
    {
        printf("enter temp in c");
        scanf("%f",&cl);
        fh=(cl*1.8)+32;
        printf("fh=%.2f",fh);
    }
    else
    {
        printf("your value is invalid");
    }
    return 0;
}