#include<stdio.h>
int main()
{
	int arr[5][5]={	1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25},i,j,lar=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(arr[i][j]>lar)
				lar=arr[i][j];
	printf("largest num:%d",lar);
}
