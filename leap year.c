#include<stdio.h>
voidmain()
{
int a;
printf("\n ente the year\n");
scanf("%d",&a);
if(a%4==0)
{
printf("\n the given year is leap year\n");
}
else
{
printf("\n the given year is not leap year\n");
}
getch();
}
