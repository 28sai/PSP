#include<stdio.h>
int main(){

  int n,pri,j,i,s=0;
  printf("range:");
  scanf("%d",&n);
  printf("primenum:");
  for (i=2;i<n;i++)
  {
    pri=1;
    for(j=2;j<i;j++){
      if(i%j==0) 
	  {
        pri=0;
        break;
      }
    }
    if(pri==1){
      printf("%d",i);
      s=s+i;
    }
  }
  printf("\nsum of primeum:%d",s);
}
