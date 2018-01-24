#include<stdio.h>
void main()
{
int i,sum=0,n;
prinft("\n enter the positive integer\n");
scanf("%d,&n);
for(i=1;i<n;i++)
{
sum+=i;
printf("\n sum of %d number is:\n",sum);
}
getch();
}
