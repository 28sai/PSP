#include<stdio.h>
int main(){
	int a[10][10],b[10][10],d[10][10],i,j,k,r1,c1,r2,c2,*p,*q,*t;
	p=a;
	q=b;
	t=d;
	printf("enter r1,r2,c1,c2");
	scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
	printf("enter 1st elemtnss: ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",p+(i*c1)+j);
		}
	}
	printf("enter 2ndelemnts: ");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",q+(i*c2)+j);
		}
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			*(t+(i*c1)+j)=0;
			*(t+(i*c1)+j)=*(t+(i*c1)+j)+*(p+(i*c1)+j)+(*q+(i*c2)+j);
		}
	}
		printf("mul is: ");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d",*(t+(i*c1)+j));
		}
		printf("\n");
	}
	
	
}
