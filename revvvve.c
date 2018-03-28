#include <stdio.h>

void main()
{
   int n,reversedNumber=0,remainder;
   scanf("%d",&n);
   while(n)
   {
    remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
   }
   printf("%d", reversedNumber);
    getch();
}
