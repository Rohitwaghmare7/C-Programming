#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   char c[20];
   

   fptr = fopen("E:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    printf("enter a string : \n");
   fgets(c,sizeof(c),stdin);

   fprintf(fptr,c);

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   

   return 0;
}