#include <stdio.h>
int main(){
   int r,c,i,j,a[10][10],t[10][10];
   printf("Enter rows and columns :\n");
   scanf("%d%d",&r,&c);
   printf("Enter elements of the matrix\n");
   for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         scanf("%d",&a[i][j]);
   for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         t[j][i]=a[i][j];
   printf("Transpose of the matrix:\n");
   for(i=0;i<c;i++){
      for(j=0;j<r;j++)
         printf("%d\t",t[i][j]);
      printf("\n");
   }
}
