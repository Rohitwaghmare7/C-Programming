#include <stdio.h>
int main()
{
  int num, i ,j;

  for (i = 1; i <= 10; ++i)
   {
       num=i;
       for(j=1;j<=10;j++)
      {
           printf("%4d",(num*j));
      }
      printf("\n");
   }
   return 0;
}