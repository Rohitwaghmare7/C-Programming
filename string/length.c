#include<stdio.h>
#include<string.h>

int main()
{
    char a[20]={"program"};
    char b[20]={'p','r','o','g','r','a','m',};

    printf("\nlength of string a is %zu",strlen(a));

    printf("\nlength of string b is %zu",strlen(b));

    return 0;
}