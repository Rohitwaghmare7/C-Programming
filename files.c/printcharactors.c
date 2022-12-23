#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[100];
   FILE *fptr;

   fptr = fopen("E:\\rohit.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter name : ");
   fgets(name,sizeof(name),stdin);

   fprintf(fptr,name);
   puts(name);
   fclose(fptr);

   
   return 0;
}