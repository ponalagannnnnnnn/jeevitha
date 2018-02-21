#include<stdio.h>
voidmain()
{
char a[50];
int i,count=0;
printf("\n enter the string");
scanf("%s",a);
for(i=0;a[i]!'\0';++)
{
if(a[i]=='')
{
count++;
}
}
printf("%s",count);
getch();
}
