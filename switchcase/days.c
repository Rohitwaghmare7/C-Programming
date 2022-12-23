#include<stdio.h>
int main()
{
    printf("\nfind name of the day using switch case\n");
    printf("-----------------------------------------\n");

    int n;

    printf("enetr va;ue for the day : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("\n monday");
        break;

    case 2:
        printf("\ntuesday");
        break;

    case 3:
        printf("\nwednesday");
        break;

    case 4:
        printf("\nthuesday");
        break;

    case 5:
        printf("\nfriday");
        break;               
    
    case 6:
        printf("\nsaturday");
        break;
    
    case 7:
        printf("\nsunday");
        break;

    default:
        printf("invalid day\n");
        break;
    }
    return 0;

}
