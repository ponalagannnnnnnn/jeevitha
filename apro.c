#include<stdi.h>
void main()
{
int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=c;i>0;i--)
    {
    	sum=sum+a;
    	a=a+b;
        }
    printf("%d",sum);
    getch();
    }
