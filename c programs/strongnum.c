#include<stdio.h>
int strong()
{
    int i,x,n,rem,s=0,fact=1;
    printf("enter number: ");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact = fact*i;
        }
        s=s+fact;
        n=n/10;
    }
    if(s==x)
    {
        printf("%d is sn",x);
    }
    else
    {
        printf("%d is not sn",x);
    }
}
int main(){
	strong();
}
