#include<stdio.h>
void main()
{
int i;fact=1,n;
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of %d",n,fact);
getch();
}
