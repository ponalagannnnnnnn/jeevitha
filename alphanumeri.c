#include<stdio.h>
void main()
{
char str[50];
int i,len;
printf("\n enter the string");
scanf("%s",&str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]>='1'&&str[i]<='9')
{
printf("%c\n",str[i]);
}
}
getch();
}
