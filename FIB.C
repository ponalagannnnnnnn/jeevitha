#include<stdio.h>
void main()
{
int i,n,a1=0,a2=1,nextnum;
printf("\n enter the no of terms:");
scanf("%d",&n);
printf("\n Fibonacci series:");
for(i=1;i<=n;i++)
{
printf("%d",a1);
nextnum=a1+a2;
a1=a2;
a2=nextnum;
}
getch();
}
