#include<stdio.h>
void main()
{
int array[100],n,i,largest;
printf("\n Enter the numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
mini=array[0];
for(i=0;i<n;i++)
{
if(mini<array[i])
mini=array[i]);
}
printf("\n the largest number in the array=%d",mini);
getch();
  
}
