#include<stdio.h>
void quicksort(int a[],int n)
{
    int i;
    for (i=0;i<n;i++) 
    {
        printf("%d",a[i]);
    }
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int i,j,temp;
    int a[5]={10,30,20,50,40};
    int n=sizeof(a)/sizeof(a[0]);
    printf("before sorting array elements are : \n");
    print(a,n);
    bubble(a,n);
    printf("\nAfter sorting array elements are : \n");
    print(a,n);
}