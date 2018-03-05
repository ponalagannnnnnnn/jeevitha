#include<stdio.h>
void main()
{
int num,digit,rev;
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
rev=rev*10+digit;
printf("\n Reverse of a number is :%d",rev);
}
getch();
}
