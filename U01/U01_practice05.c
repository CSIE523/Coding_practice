#include<stdio.h>

int main(){
	int a, b;
	int sum=0;
	scanf("%d %d", &a, &b);
	if(a<b){
		for(int i=a;i<=b;i++){
			sum+=i*i;
		}
	}
	else{
		for(int i=b;i<=a;i++){
			sum+=i*i;
		}
	}
	printf("%d", sum);
}