#include<stdio.h>
int main()
{
int array[100],n,i,minimun;
printf("\n Enter the numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
max=array[0];
for(i=0;i<n;i++)
{
if(max<array[i])
max=array[i]);
}
printf("\n the minimum number in the array=%d",max);
getch();
  
}
