#include<stdio.h>

void displaystring(char str[]);

int main()
{
    char str[20];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);

    displaystring(str);

    return 0;
}
void displaystring(char str[])
{
    printf("display string : ");
    puts(str);
}