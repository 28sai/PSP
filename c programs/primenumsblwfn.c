/*dispaly prinum blw two intervals using function */
/*check primme and armstrong by making fns*/
/**/
#include<stdio.h>
int main(){
  int a,b,i,x;

  printf("enter two nums: ");
  scanf("%d%d",&a,&b);
  if(a>b){
    a=a+b;
    b=a-b;
    a=a-b;
  }
  for(i=a+1;i<b;++i){
    x=chkpn(i);
    if(x==1)
      printf("%d",i);
    }
  }

int chkpn(int n) {
  int j,x=1;

  for(j=2;j<=n/2;++j) {
    if(n%j==0) {
      x=0;
      break;
    }
  }
  return x;
}
