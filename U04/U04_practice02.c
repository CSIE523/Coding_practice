#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int k=0;k<n;k++)
		scanf("%d", &arr[k]);
	int i, j, temp;
	for (i = 0; i < n - 1; ++i){
		for (j = 0; j < n - 1 - i; ++j){  
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(int k=0;k<n;k++){
		if(k==n-1)
			printf("%d", arr[k]);
		else
			printf("%d ", arr[k]);
	}

}