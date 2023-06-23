#include<stdio.h>
int main(){
    int ar1[10], ar2[10], ar3[10],i,j,s,n;	
       printf("enter num:");
       scanf("%d",&n);
       for(i=0;i<n;i++)
        {
          printf("enter %d elements: ",i);
	      scanf("%d",&ar1[i]);
	    }
    for(i=0;i<n;i++)
    {
	if(ar1[i]%2 == 0)
	{
	   ar2[j] = ar1[i];
	   j++;
	}
	
	else
	{
	   ar3[s] = ar1[i];
	   s++;
	}
    }

    printf("\neven: \n");
    for(i=0;i<j;i++)
    {
	printf("%d",ar2[i]);
    }
    printf("\nodd:");
    for(i=0;i<s;i++)
    {
	printf("%d",ar3[i]);
    }
 }

