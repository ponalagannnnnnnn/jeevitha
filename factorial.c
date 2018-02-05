#include<stdio.h>
void main()
[
int i,n,factorial=1;
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
factorial=factorial*i;
}
printf("\n factorial is %d",factorial");
getch();
}
