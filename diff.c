#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the value of a and b");
scanf("%d%d",&a,&b);
c=a-b;
printf("\n the difference is %d",c);
if(c%2==0)
{
printf("\n it is an even number");
}
else
{
printf("\n it is an odd number");
}
getch();
}
