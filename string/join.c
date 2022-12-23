#include<stdio.h>
#include<string.h>

int main()
{
    char str1[200]="my name is ", str2[200]="rohit";

    strcat(str1,str2);

    puts(str1);

    return 0;
}