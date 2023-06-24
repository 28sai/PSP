#include<stdio.h>
int main(){
	int a[10],i,n,*p,*q,e=0,o=0;
	p=a;
	q=&n;
	printf("eter the size: ");
	scanf("%d",&n);
	printf("enter the elemets: ");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	printf("array elemts are: ");
	for(i=0;i<n;i++){
		printf("%d",*(p+i));}
		for(i=0;i<n;i++){
		if(a[i]%2==0)
	{
		printf("even:%d\n",*(p+i));
		e++;
	}
	else{
		printf("odd:%d\n",*(p+i));
		o++;
	}
}
printf("the even elemnts are: %d",e);
printf("the odd elemnts are: %d",o);
}
	
	

