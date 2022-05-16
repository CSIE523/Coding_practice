#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n;
	char concat[150];
	char str[150];
	char total[150];
	scanf("%s", str);
	strcpy(total, str);
	while(scanf("%d%s", &n, concat)!=EOF){
		if(n==0){
			strcat(concat, total);
			strcpy(total, concat);
		}else{
			strcat(total, concat);
		}
	}
	printf("%s", total);
}