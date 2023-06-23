//sum of arrays
#include<stdio.h>
int main(){
    int arr[10],size,i,s=0;
    printf("size");
    scanf("%d",&size);
    printf("elements");
    for(i=0;i<size;i++)
    {
          scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
          s=s+arr[i];
	}
    printf("Sum:%d\n",s);
}
