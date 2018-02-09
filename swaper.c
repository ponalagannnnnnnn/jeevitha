#include<stdio.h>
void main()
{
int x,y;
printf("\n enter the two numbers");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("\n the swapped numbers are:%d\t%d",x,y);
getch();
}
