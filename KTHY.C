#include<stdio.h>
void main()
{
int n,k,a[10];
printf("\n Enter the value of n and k");
scanf("%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n %d",a[k-1]);
getch();
}
