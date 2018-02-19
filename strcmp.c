#include<stdio.h>
#include<string.h>
void main()
{
char str1,str2
printf("\n enter the str1:");
scanf("s",&str1);
printf("\n enter the str2:");
scanf("%s",&str2);
strcmp(str1,str2);
if(str1>=str2)
{
printf("\n the greater string is %s",str1);
}
else if(str1<=str2)
{
printf("\n the greater string is %s",str2);
}
else
{
printf("\n nothing");
}
getch();
}
