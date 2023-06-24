#include<stdio.h>
int main(){
	int x[10][10],y[10][10],z[10][10],*p,*q,*t,i,j,r,c;
	printf("enter rows and cols: ");
	scanf("%d%d",&r,&c);
	printf("enter 1st elememts: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",*(x+i)+j);
		}
	}
	printf("enter 2nd elemnts: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",*(y+i)+j);
		}
	}
	printf("the addn is: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			*(*(z+i)+j)=*(*(x+i)+j)+*(*(y+i)+j);
			printf("%d",*(*(z+i)+j));
		}
		printf("\n");
	}
}
