#include<stdio.h>
void main()
{
int base,exp,i;
long long power =1;
printf("\n enter the base");
scanf("%d",&base);
printf(\n enter the exp");
scanf("%d",&exp);
for(i=1;i<=exp;i++)
{
power=power*base;
}
printf("%d^%d=%d",base,exp,power)
getch();
}
