#include<stdio.h>
int main()
{
    int i,j,n;
    int a[50][50];
    int tm[50][50];

    printf("enter the value pf square matrix : ");
    scanf("%d",&n);

    printf("enter the elements in the first matrix :");

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        {
            printf("\nelement - [%d],[%d] : ",i,j);
	        scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe first matrix is :\n");
    
    for(i=0;i<n;i++)
    {   
        printf("\n");
        for(j=0;j<n;j++)
        {
                printf("%d\t",a[i][j]);
        }
    }

    printf("\ntranspose of matrix is : \n");     

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tm[j][i]=a[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)

        printf("%d\t",tm[i][j]);
        printf("\n");
    }
    return 0;
}