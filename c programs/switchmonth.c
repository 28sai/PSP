#include<stdio.h>
int main(){
	int month;
	printf("enter any number: ");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("31 dys");
			break;
		case 2:
			printf("28 days");
			break;
	}
}
