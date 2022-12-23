#include<stdio.h>
int main()
{
    int p,c,m,t,pm;
    printf("eligibility criterai \n");
    printf("marks in math >= 65 \n");
    printf("marks in phy >=55 \n");
    printf("marks in che >=50 \n");
    printf("total marks in all three subject >= 190 \n");
    printf("total marks in math and physics >=140 \n");

    printf("enter marks obtain in phy \n");
    scanf("%d",&p);

    printf("enter marks obtain in math \n");
    scanf("%d",&m);

    printf("enter marks obtain in che \n");
    scanf("%d",&c);

    printf("enter marks of math ,phy and che %d \n",m+p+c);

    printf("enter marks of phy and che %d \n", m+p);

    if(m >= 65)
        if(p >= 55)
            if(c >= 50 )
            if ((p+c+m >= 190) || (p=m >+140))

             printf("candidate is eligible");

             else printf("candidate is not eligible");
             else printf("candidate is not eligible");

         else printf("candidate is not eligible");
    else printf("candidate is not eligible");

    return 0;

        
    


}