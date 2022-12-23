#include<stdio.h>
int main()
{
  printf("find out you get profit or loss and how much\n");
  printf("\n------------------------------------------\n");

  int sp,cp,p,l;

  printf("enetr values of sp and cp : \n");
  scanf("%d%d",&sp,&cp);

  if (sp>cp)
  {
      p=sp-cp;
      printf("you  are in profit of %d ",p);
  }
  else
  {
      l=cp-sp;
      printf("you are in loss of %d",l);
  }
  return 0;
}