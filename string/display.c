#include<stdio.h>
int main()
{
    char name[20];
    printf("enetr name : ");
    fgets(name,sizeof(name),stdin);

    printf("\nname : ");
    puts(name);
    return 0;
}