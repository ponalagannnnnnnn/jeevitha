#include<stdio.h>
void main()
{
int n,i,sum=0,num;
printf("\n Enter the value of n");
scanf("%d",&n);
printf("\n enter the number one by one");
scanf("%d",&num);
for(i=0;i<n;i++)
{
scanf("%d",&sum);
}
for(i=0;i<n;i++)
{
sum=sum+num[i];
}
printf("\n the sum of the number is:%d",sum);
getch();
}
