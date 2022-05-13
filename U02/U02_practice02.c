#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n*2];
	int tmp=0;
	for(int i=0;i<n*2;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<n;i++){
		tmp+=(arr[i]*arr[i+n]);
	}
	printf("%d", tmp);
}