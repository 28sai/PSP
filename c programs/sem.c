#include<stdio.h>
void main(){
	int a[5]={1,2,3,4,5};
	int i,j,k;
	i=++a[1];
	j=a[1]++;
	k=a[i++];
	printf("i=%d j=%d k=%d",i,j,k);

}
