#include<stdio.h>
#include<string.h>
void main()
{
char str[200];
int i,line=0;
printf("\n enter the paragraph");
scanf("%s",str);
for(i=0;str!=0;i++)
{
if(str[i]=='.');
line=line+1;
}
printf("\n the no of lines in paragraph is %s",line)
getch();
}
