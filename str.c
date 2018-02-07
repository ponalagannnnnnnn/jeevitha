#include<stdio.h>
void main()
{
char str[120],count;
int i;
printf("\n enter the string");
scanf("%s",&str[120]);
for(i=0;std[i]='\0';i++)
{
if(str[i]=>'a'&& str[i]<='z'||str[i]=>'0'&&str[i]<='9')
{
count=1;
}
else
{
count=2;
}
}
if (count==1)
{
printf("\n it contains both alphabet and numbers");
}
else
{
printf("\n it does not contains both alphabet and numbers");
}
getch();
}

