#include <stdio.h>
int main() {
   int i,m,r,s=0;
   printf("Enter rows: ");
   scanf("%d", &r);
   for(i=1;i<=r;++i,s=0){
      for(m=1;m<=r-i;++m){
         printf("  ");
      }
      while(s!=2*i-1) {
	  
         printf("* ");
         ++s;
      }
      printf("\n");
   }
}


