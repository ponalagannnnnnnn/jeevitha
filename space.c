#include<stdio.h>
#include<string.h>
void main()
{
char str[10];
int l=strlen(str);
int i,count=0;
printf("\n Enter the string");
scanf("%s",str);
for(i=0;i<=1;i++)
{
if(str[i]=' ')
{
count=count+1;
}
printf("\n the total no of spaces in the sentence is:%s",count);
getch();
}
