#include<stdio.h>

int main(){
	int n;
	int d = 2;
	scanf("%d", &n);
	int m=n;
	while(n!=0){
		if(n%d==0){	
			if(n/d>1)
				printf("%d*", d);
			else
				printf("%d", d);
			n/=d;
		}
		else{
			if(d == m)
				break;
			d++;
		}
	}
	if(n==m)
		printf("%d", m);
}