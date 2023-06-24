#include<stdio.h>
int main(){
	int months,days;
	printf("enter days: ");
	scanf("%d",&days);
	months=days/30;
	days=days%30;
	printf("months=%ddays=%d",months,days);
}
