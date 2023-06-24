#include<stdio.h>
int main(){  
int  r,c,a[3][3],b[3][3],mul[3][3],i,j,k;    
printf("row");    
scanf("%d",&r);    
printf("col");    
scanf("%d",&c);    
printf("1st element:\n");    
for(i=0;i<r;i++)    
{    
	for(j=0;j<c;j++)    
	{    
		scanf("%d",&a[i][j]);    
	}    
}  			  
printf("2nd elents:\n");    
for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++) 	   
	{    
	scanf("%d",&b[i][j]);    
	}    
	}    
    
printf("mul:\n");    
for(i=0;i<r;i++)    
{    
	for(j=0;j<c;j++)    
	{    
		mul[i][j]=0;    
		for(k=0;k<c;k++)    
		{    
			mul[i][j]+=a[i][k]*b[k][j];    
		}    
	}    
}        
for(i=0;i<r;i++)    
{    
	for(j=0;j<c;j++)    
	{    
		printf("%d\t",mul[i][j]);    
	}    
	printf("\n");    
}      
} 
