#include<stdio.h>

int main(){
	int ans=0;
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	a-=b;
	while(a>0){
		if((a-c)<=0){
			ans++;
			break;
		}else{
			a=a-c+d;
			ans++;
		}
	}
	printf("%d", ans);
}