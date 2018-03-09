#include<stdio.h>
void main()
{
int n,a[10],i,min;
printf("\n Enter the value of n");
scanf("%d",&n);
printf("\n enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("\n the minimum number is %d",min);
getch();
}
