#include<stdio.h>
#include<string.h>

int main()
{
    char line[200];
    int i,j;

    printf("enter string : \n");
    fgets(line,sizeof(line),stdin);

    for(i=0,j;line[i]!='\0';i++)
    {
        while (!(line[i]>='a' && line[i]<='z') && !(line[i]>='A' && line[i]<= 'Z'))
        {
            for(j=i;line[j]!='\0';j++)
            {
                line[i]=line[j+1];
            }
            line[j]='\0';
        }
        
    }
    puts(line);
    return 0;
}