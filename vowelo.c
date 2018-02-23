#include<stdio.h>
int main()
{
char a,lower case,upper case,c; 
printf("\n enter the string");
scanf("%s",a);
lower case={'a','e','i','o','u'};
upper case={'A','E','I','O','U'};
c=lower case||upper case;
if(a==c)
{
printf("\n yes");
}
else
{
printf("\n No");
}
return 0;
}
