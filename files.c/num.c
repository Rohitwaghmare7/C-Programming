#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("E.\\rohit.txt","w");

    // if(fptr == NULL )
    //  {
    //     printf("error");
    //     exit(1);
    //  }
    printf("enetr number");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}