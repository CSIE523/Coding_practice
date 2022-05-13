#include<stdio.h>

int main(){
	int n;
	char c;
	
	scanf("%d%c", &n, &c);
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++)
			printf("%c", c);
		printf("\n");
	}
}