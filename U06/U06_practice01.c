#include<stdio.h>

int main(){
	int n;
	int i=0;
	scanf("%d", &n);
	int ans[20];
	while(n!=0){
		ans[i]=n%7;
		n/=7;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		printf("%d", ans[j]);
}