#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &arr[i][j]);
	
	for(int j=0;j<n;j++){
		for(int i=n-1;i>=0;i--){
			if(i==0)
				printf("%d", arr[i][j]);
			else
				printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}