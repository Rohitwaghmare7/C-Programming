#include<stdio.h>
int main()
{
    int arr[10];
    int i;

    for(i=0;i<10;i++)
    {
        printf("\nenter a number - %d :",i);

        scanf("%d",&arr[i]);
    }
    printf("\ndisplay");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    
}