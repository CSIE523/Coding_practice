#include<stdio.h>

int main(){
	int arr[30];
	int idx=0;
	int a;
	scanf("%d", &a); 
	for(int i=0;i<a;i++){
		scanf("%d", &arr[i]);	
	}
	for(int i=a-1;i>=0;i--){
		if(i==0)
			printf("%d", arr[i]);	
		else
			printf("%d ", arr[i]);
	}
}