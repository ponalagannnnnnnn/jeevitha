#include<stdio.h>
void main()
{
int num,count=0,digit;
printf("\n enter the numbers");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
digit=num%10;
count++;
}
printf("\n the number of digits are %d",count);
getch();
}
