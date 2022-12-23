#include<stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("he is valid for voting ");

    }
    else
    {
        printf("he is not valid for voting ");
    }
    getch();
}