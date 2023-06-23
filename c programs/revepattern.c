#include<stdio.h>  
int main(){
    int i,j,rows,m;  
    printf("enrt rows: ");  
    scanf("%d",&rows);   
    printf("\n");  
    for(i=1;i<=rows;i++)   
    {  
        for(j=i;j<rows;j++)   
        {  
            printf("  ");   
        }  
        for(m=1;m<=i;m++)  
        {  
            printf(" %d",m);   
        }  
        printf ("\n");   
    }        
}  
