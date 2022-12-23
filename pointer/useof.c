#include <stdio.h>
void main()
{
  int m;
  float fx;
  char cht;

  printf("enter value of m = ");
  scanf("%d",&m);

  printf("enter value of fx =");
  scanf("%f",&fx);

  printf("enter a charector =");
  scanf("%c",&cht);
  
   printf("\n\n Pointer : Demonstrate the use of & and * operator :\n"); 
   printf("--------------------------------------------------------\n");

 
  int *pt1;
  float *pt2;
  char *pt3;

  pt1= &m;
  pt2=&fx;
  pt3=&cht;

  printf ( " m = %d\n",m);
  printf ( " fx = %f\n",fx);
  printf ( " cht = %c\n",cht);

  printf("\n Using & operator :\n"); 
  printf("-----------------------\n");  

  printf ( " address of m = %p\n",&m);
  printf ( " address of fx = %p\n",&fx);
  printf ( " address of cht = %p\n",&cht);

  printf("\n Using & and * operator :\n"); 
  printf("-----------------------------\n"); 

  printf ( " value at address of m = %d\n",*(&m));
  printf ( " value at address of fx = %f\n",*(&fx));
  printf ( " value at address of cht = %c\n",*(&cht));

  printf("\n Using only pointer variable :\n"); 
  printf("----------------------------------\n"); 

  printf ( " address of m = %p\n",pt1);
  printf ( " address of fx = %p\n",pt2);
  printf ( " address of cht = %p\n",pt3);

  printf("\n Using only pointer operator :\n"); 
  printf("----------------------------------\n"); 

  printf ( " value at address of m = %d\n",*pt1);
  printf ( " value at address of fx= %f\n",*pt2);
  printf ( " value at address of cht= %c\n\n",*pt3);
}