//gross salary (from internet)
#include<stdio.h>
int main(){
   int gs,basic,da,ta;
   printf("basic salary: ");
   scanf("%d",&basic);
   da=(10*basic)/100;
   ta=(12*basic)/100;
   gs=basic+da+ta;
   printf("\ngs:%d",gs);
}
