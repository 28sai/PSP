//days to year
#include<stdio.h>
int main(){
	int days,year,weeks;
	printf("enter days: ");
	scanf("%d",&days);
	year=days/365;
	weeks=(days%365)/7;
	days=(days%365)%7;
	printf("years =%d",year);
	printf("\n weeks = %d",weeks);
	printf("\n days=%d",days);
	}
