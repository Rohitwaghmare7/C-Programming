#include<stdio.h>

void main()
{
    int i,j,n,a[50][50],b[50][50],c[50][50];

    printf("sum of the two matrix\n");
    printf("---------------------\n");

    printf("enetr the value of square matrix : \n");
    scanf("%d",&n);

    printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        } 
        printf("Input elements in the second matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&b[i][j]);
            }
        } 

        printf("\n the first matrix is :\n");
        for(i=0;i<n;i++)
        {   
            printf("\n");
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n the second matrix is :\n");
        for(i=0;i<n;i++)
        {   
            printf("\n");
            for(j=0;j<n;j++)
            {
                printf("%d\t",b[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\nthe sum of the matrix is : \n");
        for(i=0;i<n;i++)
        {   
            printf("\n");
            for(j=0;j<n;j++)
            printf("%d\t",c[i][j]);
        }
        printf("\n\n");
        
}