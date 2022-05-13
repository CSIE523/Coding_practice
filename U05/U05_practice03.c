#include<stdio.h>

int main(){
	int n, m;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(i>0){
			a[i]+=a[i-1];
		}
	}
	scanf("%d", &m);
	int b[m];
	
	for(int i=0;i<m;i++)
		scanf("%d", &b[i]);

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(b[i]<=a[j]){
				printf("%d\n", j+1);
				break;
			}
		}
	}
	
	
}