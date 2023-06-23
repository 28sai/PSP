#include<stdio.h>
int checkpn(){
  int n,i,x=1;
  printf("num: ");
  scanf("%d",&n);
  if(n==0||n==1)
    x=0;
  for(i=2;i<=n/2;++i) {
    if(n%i==0){
      x=0;
      break;
    }
  }
  if(x==1)
    printf("primen");
  else
    printf("not prime");
}
int main(){
	checkpn();
}
