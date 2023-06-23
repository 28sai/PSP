#include<stdio.h>
int sinx()
{
    int i,n,x,a;
    float s;
    printf("enter x: ");
    scanf("%d",&x); 
    printf("enetr n : ");
    scanf("%d",&n);
    x=x*3.14/180;
    a=x;
    s=x;
    for(i=1;i<=n;i++)
    {
        a=(a*(-1)*x*x)/(2*i*(2*i+1));
        s=s+a;
    }
    printf("sin=%f",s);
}
int main(){
	sinx();
}
