#include<stdio.h>
void main()
{
int i,rev inte=0,rem,org inte;
printf("\n enter the interger");
scanf("%d",&n);
org inte=n;
while(n!=0)
{
rem=n%10;
rev inte=rev inte*10+rem;
n/=10;
}
if(org inte=rev inte)
{
printf("\n it is a palindrome");
}
else
{
printf("\n it is not a palindrome");
}
getch();
}
