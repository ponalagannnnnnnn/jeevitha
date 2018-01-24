#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the values\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("\n a is largest\n");
}
else if(b>c)
{
printf("\n b is largest\n");
}
else if(c>b)
{
printf("\n c is largest\n");
}
getch();
}
