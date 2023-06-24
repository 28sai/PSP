
#include <stdio.h>
int main() {
	int r,i,j=1,s=0;
	printf("enter rows: ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		while(s<3)
		{
			printf("%d",j++);
			s++;
		}
		s=0;
		printf("\n");
	}
}
