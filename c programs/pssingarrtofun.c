#include<stdio.h>
int main(){
  int result,num[]={1,2,3,4,5};
  result=sum(num); 
  printf("result=%d",result);
}
int sum(int num[]){
  int i,sum=0;

  for(i=0;i<6;++i){
    sum+=num[i];
  }
return(sum);
}
