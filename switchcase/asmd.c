#include<stdio.h>
int main()
{
    printf("enetr values for a and b and use switchcase for add,sub,multi and div\n");
    printf("------------------------------------------------------------------------\n");

    int a,b,c;
    int choice;

    printf("enter values for a and b : ");
    scanf("%d%d",&a,&b);

    printf("enetr your chooice 1:add ,2:sub, 3:multi ,4:div : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        c=a+b;
        printf("add of a and b is : %d\n",c);
        break;

    case 2:
        c=a-b;
        printf("sub of a and b is : %d\n",c);
        break;

    case 3:
        c=a*b;
        printf("multi of a and b is : %d\n",c);
        break;

    case 4:
        c=a/b;
        printf("div of a and b is : %d",c);
        break;

    default:
        printf("invalid choice\n");
        break;
    }
    return 0;
}