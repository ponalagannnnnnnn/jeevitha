#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the numbers");
scanf("%d%d",&a,&b);
if((a%2==0)&&(b%2==0))
{
printf("\n both are even num");
}
else
{
printf("\n both are odd num");
c=a*b;
if(c%2==0)
{
printf("\n it is an even num");
}
else
{
printf("\n it is an odd num");
}
getch();
}
