#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) return -1;         
      else if (c == d) return 0;   
      else return 1;                        
}

int main(){
	int odd[10];
	int even[10];
	int n;
	int odd_i = 0;
	int even_i = 0;
	
	for(int i=0;i<10;i++){
		scanf("%d", &n);
		if(n%2==1)
			odd[odd_i++] = n;
		else
			even[even_i++] = n;
	}
	qsort(odd, odd_i, sizeof(int), compare);
	qsort(even, even_i, sizeof(int), compare);

	for(int i=0;i<even_i;i++)
		printf(" %d", even[i]);
	for(int i=odd_i-1;i>=0;i--)
		printf(" %d", odd[i]);
}