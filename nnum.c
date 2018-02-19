#include<stdio.h>
void main()
{
int n,a,b,c;
printf("\n enter the value of n");
scanf("%d",&n);
printf("\n enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("\nthe highest number is %d",a);
printf("\n the lowest number is %d",b);
}
elseif(b>c)
{
printf("\nthe highest number is %d",b);
printf("\nthe lowest number is %d",c);
}
else if(c>b)
{
printf("\n the highest number is%d",c)
printf("\n the lowest number is %d",b);
}
getch();
}
