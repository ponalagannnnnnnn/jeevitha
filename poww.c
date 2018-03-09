#include<stdio.h>
void main()
{
int b,exp,result;
printf("\n Enter the base");
scanf("%d",&b);
printf("\n Enter the exponent");
scanf("%d",&exp);
result=power(b,exp);
printf("\n The answer is %d",result);
getch();
}
