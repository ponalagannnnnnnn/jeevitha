#include<stdio.h>
void main()
{
int a;
printf("\n Enter the number");
scanf("%d",&a);
if(a%2==0)
{
while(a%2==0)
{
printf("\n %d",(a/2));
a=a/2;
}
}
else if(a%2!=0)
{
printf("It is not divisible by 2");
}
getch();
}
