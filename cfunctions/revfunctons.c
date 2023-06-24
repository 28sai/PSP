#include<stdio.h>
int rev(int n)
{
   int s=0,r;
   while(n>0)
   {
   	 r=n%10;
     s=s*10+r;
     n /= 10;
   }
   return s;
}
void main()
{  
   int x,n;
   printf("enter num: ");
   scanf("%d", &n);
   x=rev(n);
   printf("rev of %d is: %d", n,x);
}
