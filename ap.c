#include<stdio.h>
void main()
{
int n,a,d,value,sum=0,i;
printf("\n no of terms");
scanf("%d",&n);
printf("\n enter the frst term and difference");
scanf("%d%d",&a,&d);
value=a;
printf("\n AP series is......");
value=a;
for(i=0;i<terms;i++);
{
printf("%d",value);
sum=sum+value;
value=value+difference;
}
printf("\n AP terms %d is %d",terms,value);
getch();
}
