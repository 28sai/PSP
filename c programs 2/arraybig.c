#include<stdio.h>
int main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2]={{2,3,4},{5,6,7}};
	int i,j,c;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c=a[i][j]+b[i][j];
		
		}
			printf(" %d",c);
	}
}
