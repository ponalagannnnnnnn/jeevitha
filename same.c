#include<stdio.h>
void main()
{
char str[20];
int i,length,n;
printf("\n Enter the string:");
scanf("%c",&str);
printf("\n Enter the number:");
scanf("%d",&n);
length=strlen(str);
for(i=n;i<=length;i++)
{
printf("%c",str[i]);
}
getch();
}
