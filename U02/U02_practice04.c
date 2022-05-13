#include<stdio.h>

int main(){
	int n1, n2;
	int tmp;
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d", &arr[i]);
	}
	while(scanf("%d %d", &n1, &n2) != EOF){
		tmp=arr[n1-1];
		arr[n1-1]=arr[n2-1];
		arr[n2-1]=tmp;
	}
	for(int i=0;i<5;i++){
		printf(" %d", arr[i]);
	}
}