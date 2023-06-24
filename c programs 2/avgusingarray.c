//sum,avg using arrays
#include<stdio.h>
int main(){
    int n,i,num[6],s=0,avg;
    printf("no of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter marks:");
        scanf("%d",&num[i]);
        s+=num[i];
    }
    avg=s/n;
    printf("sum:%d",s);
    printf("\navg:%d",avg);
}

