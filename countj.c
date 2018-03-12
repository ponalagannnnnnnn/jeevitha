#include<stdio.h>
void main()
{
int num,dig,count=0;
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
dig=num%10;
num=num/10;
count++;
printf("\n the digits of a number is %d",count);
getch();
}
