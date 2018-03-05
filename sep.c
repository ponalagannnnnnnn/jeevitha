#include<stdio.h>
void main()
{
char str[50];
int i,len;
printf("\n Enter the string");
scanf("%c",&str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(i%2==0)
{
printf("%c",str[i]);
}
}
for(i=0;i<len;i++)
{
if(i%2==1)
{
printf("%c",str[i]);
}
}
getch();
}

