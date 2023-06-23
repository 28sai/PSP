#include<stdio.h>   
int main()  
{  
    int r,c,i,j,a[10][10],b[10][10],s[10][10];  
    printf("r and c:");  
    scanf("%d%d",&r,&c);  
    printf("1st elements\n");  
    for (i= 0;i<r;i++)  
       {
		 for (j=0;j<c;j++){
		 scanf("%d",&a[i][j]);  }}
    printf("2nd elements\n");  
    for (i=0;i<r;i++)  
    {
        for (j=0;j<c;j++){
		 scanf("%d", &b[i][j]); 
	}}
    printf("sum:\n");  
    for (i=0;i<r;i++)  
    {  
        for (j=0;j<c;j++)  
        {  
            s[i][j]=a[i][j] + b[i][j];  
            printf("%d\t", s[i][j]);  
        }  
        printf("\n");  
    }  
} 
