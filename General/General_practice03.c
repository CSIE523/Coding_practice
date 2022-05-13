#include<stdio.h>

int main(){
	int arr[30];
	int max;
	int loc = 0;
	for(int i=0;i<30;i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	
	for(int i=0;i<30;i++){
		if(arr[i] > max){
			max = arr[i];
			loc = i;
		}
	}
	printf("%d %d", max, loc);
}