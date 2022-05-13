#include<stdio.h>

int main(){
	int n;
	int a=0, b=-1;
	int temp;
	scanf("%d", &n);
	int arr[n];
	int min, max;
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n - 1; ++i){
		for (int j = 0; j < n - 1 - i; ++j){  
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i==n-1)
			printf("%d", arr[i]);
		else
			printf("%d ", arr[i]);
	}
	printf("\n");
	min = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<60){
			a=i;
		}
		if(arr[i]>=60){
			b=i;
			break;
		}
	}
	if(a!=0)
		printf("%d\n", arr[a]);
	else
		printf("best case\n");
	if(b!=-1)
		printf("%d\n", arr[b]);
	else
		printf("worst case\n");
	
}