//n odd numbers
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d \n",i);
	}
}
