#include<stdio.h>
void main()
{
int num,count=0;
printf("\n enter the value of num\n");
scanf("%d",&num);
while(num!=0)
{
count++;
num=num/10;
}
printf("\n total digits are %d",count);
getch();
}
