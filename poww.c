#include<stdio.h>
void main()
{
int b,exp;
  long long result=1;
printf("\n Enter the base");
scanf("%d",&b);
printf("\n Enter the exponent");
scanf("%d",&exp);
  while(exp!=0)
  {
    result*=b;
    --exp;
  }
printf("\n The answer is %d",result);
getch();
}
