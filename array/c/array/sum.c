#include<stdio.h>
void main()
{
    int a[100];
    int i,n,sum=0;

    printf("\n\nfind the sum of all elements of arrey\n");
    printf("-----------------------------------------\n");

    printf("enter no of elements store in array:\n");
    scanf("%d",&n);

    printf("\nenter %d number in array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("elements - %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    printf("\nsum of all the numbers are %d\n\n",sum);

}