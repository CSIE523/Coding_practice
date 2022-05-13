#include<stdio.h>

int main(){
	int i, j, temp;
	int arr[10];
	for(int k=0;k<10;k++)
		scanf("%d", &arr[k]);
	for (i = 0; i < 10 - 1; ++i){
		for (j = 0; j < 10 - 1 - i; ++j){  
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(int k=9;k>=0;k--){
		printf(" %d", arr[k]);
	}

}