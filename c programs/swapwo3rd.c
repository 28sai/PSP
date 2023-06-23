//swapping without 3rd
#include<stdio.h>  
int main(){    
int a=1,b=2;      
printf("bs a:%d b:%d",a,b);      
a=a+b;  
b=a-b;    
a=a-b;    
printf("\nas a:%d b:%d",a,b);    
}
