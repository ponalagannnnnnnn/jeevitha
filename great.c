#include<stdio.h>
void main()
{
int num,c;
printf("\n enter the number");
scanf("%d",&num);
if(num%2==0)
{
num=num+1;
c=2^num;
}
printf("\n the number is %d",c);
getch();
}
