#include<stdio.h>
int main()
{
    printf("enter your choice and do add, sub, mult, div  \n");
    printf("\n------------------------------------\n");

    int a,b,c;
    int choice;

    printf("enetr values for a and b :");
    scanf("%d%d",&a,&b);

    printf("1)add,2)sub,3)multi,4)div");

    printf("\nentetr your choice : ");
    scanf("%d",&choice);

    if (choice == 1)
    {
        c=a+b;
        printf("add is : %d",c);
    }
    if (choice == 2)
    {
        c=a-b;
        printf("sub is : %d",c);
    }
    if (choice == 3)
    {
        c=a*b;
        printf("multi is :%d",c);
    }
    if (choice == 4)
    {
        c=a/b;
        printf("div is : %d",c);
    }
    return 0;
}