#include<stdio.h>
void main()
{
int n,count=0;
printf("\n enter the values\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("\n no. of digits are:%d\n",count);
getch();
}
