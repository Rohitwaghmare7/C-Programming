    Roll no-70 NAme : Hrutik v. Waghmare
    Problem statement: write a program to determine the youngest of the three.



#include<stdio.h>
int main()
{
    int ram,shyam,ajay;

    printf("enter rams age :");
    scanf("%d",&ram);

    printf("enter shyam age :");
    scanf("%d",&shyam);

    printf("enter ajay age :");
    scanf("%d",&ajay);

    if(ram<shyam)
    {
        if(ram<ajay)
        {
            printf("ram is youngest");
        }
    }
    else if(shyam<ram)
    {
        if(shyam<ajay)
        {
            printf("shyam is youngest");
        }
    }
    else
    {
        printf("ajay is youngest");
    }
}