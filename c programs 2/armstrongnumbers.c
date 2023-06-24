#include <stdio.h>
int main(){
    int i,rem,sum,temp,fn,ln;

    printf("range: ");
    scanf("%d",&fn);

    printf("end range: ");
    scanf("%d",&ln);

    printf("Armstr num: ");
    for(i=fn;i<=ln;i++){
         temp=i;
         sum = 0;

         while(temp!=0){
             rem=temp % 10;
             temp=temp/10;
             sum=sum+(rem*rem*rem);
         }
         if(sum==i)
             printf("%d ",i);
    }
printf("\n");
}

