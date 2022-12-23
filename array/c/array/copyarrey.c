#include<stdio.h>
void main()
{
    printf("\ncopy no pf arrey 1 to another arrey\n");
    printf("-------------------------------------\n");

    int i,n;
    int arr1[100], arr2[100];

    printf("enter the elements in array 1\n");
    scanf("%d",&n);

    printf("\ninput %d elements in arrey 1\n",n);

    for(i=0;i<n;i++)
    {
        printf("elements - %d : ",i);
        scanf("%d",&arr1[i]);

    }

    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
    }
    printf("elements store in arre 1 are: \n");

    for(i=0;i<n;i++);
    {
     printf("%d",arr1[i]);
    }

    printf("\n\n the elements copied into the second arrey are :\n");

    for(i=0;i<n;i++)
    {
        printf("%5d",arr2[i]);
    }

    printf("\n\n");


}