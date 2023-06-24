//42
#include<stdio.h>
int main(){
  int result,num[]={1,2,3,4,5,6};
  result = sum(num); 
  printf("Result=%d",result);
}
int sum(int num[]){
  int sum=0,i;
  for (i=0;i<6;++i) {
    sum+=num[i];
  }

  return sum;
}
