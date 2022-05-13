#include<stdio.h>

int f(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	if(n==3)
		return 4;
	return f(n-1)+f(n-2)+f(n-3);
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}
