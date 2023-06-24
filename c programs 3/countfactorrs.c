#include <stdio.h>

int main()
{
int num,i,count = 0;
printf("\nEnter the number : ");
scanf("%d",&num);

printf( "factors of %d :",num);
for(i = 1;i <= num; i++)
{
if(num % i == 0)
{
++count;
printf("%d",i);
}
}
printf("\nThe  total no of factors of %d is %d",num,count);
}
 
