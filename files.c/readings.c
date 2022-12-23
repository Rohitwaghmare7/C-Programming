#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   fptr = fopen("E:\\rohit.txt","r");

   if (fptr == NULL)
   {
       printf("Error! opening file");
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}