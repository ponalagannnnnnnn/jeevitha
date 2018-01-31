#include<stdio.h>
void main()
{
int base,exponent;
long long result=1;
printf("\n enter the exponent\n");
scanf("%d",&exoonent);
printf("\n enter the base number\n");
scanf("%d",&base);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("\n answer is %d",result);
}
getch();
}
