#include<stdio.h>
int chkpr(int n);
int main(){
  int i,n,x=0;
  printf("enter num: ");
  scanf("%d",&n);
  for(i=2;i<=n/2;++i){
    if(chkpr(i)==1){
      if(chkpr(n-i)==1){
        printf("%d=%d+%d\n",n,i,n-i);
        x=1;
      }
    }
  }
  if(x==0)
    printf("%d not work",n);
}
int chkpr(int n) {
  int i,pr=1;
  if(n==0||n==1){
    pr=0;
  }
  else{
    for(i=2;i<=n/2;++i) {
      if(n%i==0){
        pr=0;
        break;
      }
    }
  }
  return pr;
}

