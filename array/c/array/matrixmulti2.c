#include <stdio.h>
 
int main()
{
  int a,b,i,j,c,d,k,sum=0;
  int first[10][10];
  int second[10][10];
  int multiply[10][10];
 
  printf("Enter number of rows and columns for first matrix\n");
  scanf("%d%d",&a,&b);

  printf("Enter elements of first matrix\n");
 
  for (i=0;i<a;i++)
  {
    for (j=0;j<b;j++)
    {
      printf("element - [%d],[%d] : ",i,j);
      scanf("%d", &first[i][j]);
    }
  }
  printf("Enter number of rows and columns for second matrix : \n");
  scanf("%d%d",&c,&d);
 
  if (b!=c)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix :\n ");
 
    for (i=0;i<c;i++)
    {
      for (j=0;j<d;j++)
      {
        printf("element - [%d],[%d] : ",i,j);
        scanf("%d",&second[i][j]);
      }
    }
 
    for (i=0;i<a;i++) 
    {
      for (j=0;j<d;j++)
      {
        for (k=0;k<c;k++)
        {
          sum = sum + first[i][k]*second[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (i=0;i<a;i++)
    {
      for (j=0;j<d;j++)
      {
        printf("%d\t", multiply[i][j]);
      }
      printf("\n");
    }
  }
 
  return 0;
}