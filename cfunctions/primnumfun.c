#include<stdio.h>
int main(){
  int a,b,i,x;
  printf("intervals: ");
  scanf("%d%d",&a,&b);
  for(i=a+1;i<b;++i){
    x=checkprno(i);
    if(x==1)
      printf("%d",i);
    }
  }
int checkprno(int n){
  int j,x=1;
  for(j=2;j<=n/2;++j){
    if(n%j==0){
      x=0;
      break;
    }
  }
  return x;
}

