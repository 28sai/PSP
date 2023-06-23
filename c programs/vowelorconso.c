//vowel or consoanant
#include<stdio.h>
int main(){
    char ch;
    int lc,uc;//lc=lower case,uc=upper case
    printf("alphabet:\n");
    scanf("%c",&ch);
    lc=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    uc=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lc||uc)
	{
    	printf("\n %c is vowel",ch);
	}
    else 
	{
    	printf("\n %c is conso",ch);
	}
}
