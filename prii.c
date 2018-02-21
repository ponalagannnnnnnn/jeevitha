#include<stdio.h>
void main()
{
int i,n,num,flag;
printf("\n enter the value of n");
scanf("%d",&n);
printf("\n enter the number:");
scanf("%d",&num);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\n the number is a prime number");
}
else
{
printf("\n the number is not a prime number");
getch();
}
