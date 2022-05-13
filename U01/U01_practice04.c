#include<stdio.h>

int main(){
	int mon;
	scanf("%d", &mon);
	if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12)
		printf("Yes");
	else if(mon==2 || mon==4 || mon==6 || mon==9 || mon==11)
		printf("No");
	else
		printf("Error");
}v