#include<stdio.h>
#include<string.h>
void main()(
{
char str[20];
int i,num=0;
printf("\n enter the string");
scanf("%s",&str);
for(i=0;str[i]!='o';i++)
{
if(str>='1'&&str<='9')
{
num=num+1;
}
printf("\n there are %d numbers in the given word",num);
getch();
}
