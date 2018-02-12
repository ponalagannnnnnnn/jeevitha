#include<stdio.h>
void main()
{
int a,b;
printf("\n before swapping");
scanf("%d%d",&a,&b);
printf("\n a=%d\nb=%d");
a=a^b;
b=a^b;
a=a^b;
printf("\n after swapping");
printf("\n a-%d\nb=%d");
getch();
}
