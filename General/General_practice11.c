#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int rcd = 0;
	for(int i=2;i<=n;i++){
		if(n%i==0)
			rcd++;
		if(rcd > 1){
			printf("No");
			break;
		}
	}
	if(rcd==1)
		printf("Yes");
}