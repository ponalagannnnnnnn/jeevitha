#include<stdio.h>
int main()
{ 

	char str[50];
	int i,flag=0;
	printf("\n enter the string:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n no");
	}
	else
	{
		printf("\n yes");
	}
  getch();
  }
