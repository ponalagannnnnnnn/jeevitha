#include<stdio.h>
void main()
{
int n,a[20],i,b=0;
printf("\n Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b=b+1;
if(a[i]!=b)
{
printf("\n %d",b);
}
}
getch();
}
