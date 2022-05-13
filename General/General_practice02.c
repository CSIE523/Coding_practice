#include<stdio.h>

struct a{
	int on;
};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	struct a arr[n+1];
	for(int i=0;i<=n;i++)
		arr[i].on=0;
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0){
				if(arr[j].on == 0)
					arr[j].on = 1;
				else 
					arr[j].on = 0;
			}
		}
	}
	int j=0;
	for(int i=1;i<=n;i++)
		if(arr[i].on==1)
			j++;
	for(int i=1;i<=n;i++)
		if(arr[i].on==1){
			if(j==1)
				printf("%d", i);
			else
				printf("%d ", i);
			j--;
		}
	

}