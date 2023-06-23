#include <stdio.h>
int main(){
  int a[3][3],t[3][3],r,c,i,j,*p,*q;
  p=&a[0][0];
  q=&t[0][0];
  printf("r and c: ");
  scanf("%d%d",&r,&c);
  printf("elements:");
  for(i=0;i<r;++i)
  {
  for(j=0;j<c;++j)
  {
    scanf("%d",(p+(i*c)+j));
  }
}
  for(i=0;i<r;++i)
  {
  for(j=0;j<c;++j)
   {
    t[j][i]=a[i][j];
  }
}
  printf("tran:");
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
  		printf("%d",*(p+(j*r)+i));
	  }
	  printf("\n");
  }
  
}
