#include<stdio.h>
int main()
{
    char fn,ln;

    printf("enter your first name : \n");
    scanf("%c",&fn);

    printf("enter your last name : \n");
    scanf("%c",&ln);

    printf("your full name is %c %c",fn,ln);

    return 0;
}