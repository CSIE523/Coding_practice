#include<stdio.h>

int main(){
	int n;
	int tmp;
	float sum=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &tmp);
		sum+=tmp;
	}
	printf("%.2f", sum/n);
}