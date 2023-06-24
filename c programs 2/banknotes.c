// banknotes
#include<stdio.h>
int main(){
	int amt,tot;
	printf("amt: ");
	scanf("%d",&amt);
	tot=amt/100;
	printf("%d 100 notes\n", tot);
	amt=amt-(tot*100);
	tot=amt/50;
	printf("%d 50 notes\n",tot);
	amt=amt-(tot*50);
	tot=amt/20;
	printf("%d 20 otes\n",tot);
	amt=amt-(tot*20);
	tot=amt/10;
	printf("%d 10 notes\n",tot);
	amt=amt-(tot*10);
	tot=amt/5;	
	printf("%d 5 notes\n",tot);
	amt=amt-(tot*5);
	tot=amt/2;
	printf("%d 2 notes\n",tot);
	amt=amt-(tot*2);
	tot=amt/1;
	printf("%d 1 notes\n",tot);
}
