#include<stdio.h>
int arm(int n) 
{
  int rem,arm,x;
  x=n;
  while(n!=0) {
     rem=n%10;
     arm=arm+(rem*rem*rem);
     n/=10;
  }
  if(arm==x) 
  {
  return 0;
  }
  else
  {
   return 1;
}
}
int main()
{
  int n;
  printf("number: ");
  scanf("%d",&n);
  if(arm(n)==0)
  printf("%d armstrong\n",n);
  else
  printf("%d not arm",n);
  return 0;
}
