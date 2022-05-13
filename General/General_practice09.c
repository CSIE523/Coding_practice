#include<stdio.h>

int max;
int cnt;

void rec(int x){
	
	if(x==1)
		return;
	if(x%2 == 1)
		x = x * 3 + 1;
	else 
		x/=2;
	cnt++;
	rec(x);
}

int main(){
	max = 0;
	cnt = 0;
	int n, m;
	int tmp;
	while(scanf("%d %d", &n, &m)!=EOF){
		if(n > m){
			for(int j=m;j<=n;j++){
				rec(j);
				if(++cnt > max)
					max = cnt;
				cnt = 0;
			}
		}
		else{
			for(int j=n;j<=m;j++){
				rec(j);
				if(++cnt > max)
					max = cnt;
				cnt = 0;
			}
		}
		
		printf("%d %d %d\n", n, m, max);
		
		max = 0;
	}
	
}