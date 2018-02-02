#include<stdio.h>
void main()
{
int a,b,i;
printf("\n enter the range of a and b");
scanf("%d\t%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i/2==0)
{
printf("/n %d",a);
}
}
getch();
}
