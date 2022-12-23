#include<stdio.h>
#include<stdlib.h>

struct threenum
{
    int n1,n2,n3;
};

int main()
{
    int n;
    struct threenum num;
    FILE *fptr;

    fptr = fopen("file.bin","w");
    if (fptr == NULL)
    {
        printf("error");
        exit(1);
    }

    for(n=1;n<5;n++)
    {
        num.n1=n;
        num.n2=5*n;
        num.n3=5*n+1;

        fwrite(&num,sizeof(struct threenum),1,fptr);
    }
    fclose(fptr);
    return 0;

}