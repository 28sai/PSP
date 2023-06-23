 #include<stdio.h>
 int main(){
 int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%i\n", i);
            sum=sum+i;
        }

    }
    printf("sum of factors %d",sum);
}
