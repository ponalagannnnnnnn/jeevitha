#include<stdio.h>
void main()
{
int i,n;
printf("\n enter the value of n");
scanf("%d",&n);
for(i=1;i<=(n/2);i++)
{
if(pow(2,i)==n)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
getch();
}
