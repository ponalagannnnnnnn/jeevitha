#include<stdio.h>
void main()
{
int x,y;
printf("\n enter the two numbers");
scanf("%d%d",&x,&y);
printf("\nbefore swapping");
printf("\nx=%d and y=%d",x,y);
x=x^y
y=y^x;
x=x^y;
printf("\n after swapping:");
printf("\nx=%d and y=%d",x,y);
getch();
}
