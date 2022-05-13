#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return -1;}             
      else if (c == d) {return 0;}     
      else return 1;                      
}

int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		scanf("%d", &arr[i]);
		
	}
	qsort(arr, 10, sizeof(int), compare);
	
	for(int i=0;i<10;i++){
		if(arr[i]%2 == 0)
			printf(" %d", arr[i]);
	}
	for(int i=9;i>=0;i--){
		if(arr[i]%2==1)
			printf(" %d", arr[i]);
	}
}