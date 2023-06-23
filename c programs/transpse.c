//transpose
#include<stdio.h>
int main(){
   int r,c,i,j,mat[3][3],t[3][3];
   printf("r and c:\n");
   scanf("%d%d", &r,&c);
   printf("elements\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",&mat[i][j]);
     }
 }
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         t[j][i]=mat[i][j];
     }
 }
   printf("Trans:\n");
   for(i=0;i<c;i++)
   {
      for(j=0;j<r;j++)
      {
         printf("%d",t[i][j]);
     }
      printf("\n");
   }
   
}
