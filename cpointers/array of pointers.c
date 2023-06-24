#include <stdio.h>
int main(){
   int  a[]={10,20,30,40,50};
   int i,*p[5];
   for(i=0;i<5;i++){
      p[i]=&a[i];
   }
   for(i=0;i<5;i++){
      printf("%d\n",*p[i] );
   }
}
