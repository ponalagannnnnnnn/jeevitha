#include<stdio.h>
void main()
{
int n,sum=0,i;
printf("\n enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n The sum is %d",sum);
getch();
}
