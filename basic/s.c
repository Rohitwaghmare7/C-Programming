#include<stdio.h>
int main()
{
    int a,z;
    int r,sum=0;

    printf("nnn");
    scanf("%d",&a);

//     while (a>0)
//     {
      

//        r=a%10;
//        sum=sum+r;
//        a=a/10;

     
//     }
//   printf("%d",sum);

z=rec(a);

printf("%d",z);

}
int rec(int a)
{
    if (a==0)
    {
        return 0;
    }
    return(a%10+rec(a/10));;
}