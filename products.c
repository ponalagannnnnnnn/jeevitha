#include<stdio.h>
void main()
{
	int n,product=1,rem;
	printf("\n enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
    product=product*rem;
    
	}
	printf("\n%d",product);
	getch();
}
