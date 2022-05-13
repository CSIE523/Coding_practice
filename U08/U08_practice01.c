#include<stdio.h>
#define  swap(X, Y)  (X^=Y, Y^=X, X^=Y)

int main(){
	int x[2], y[2];
	int x_, y_;
	int ans=0;
	int tmp;
	for(int i=0;i<3;i++){
		scanf("%d%d%d%d", &x[0], &y[0], &x[1], &y[1]);
		if(x[0]>y[0]){
			swap(x[0], y[0]);
		}
		if(x[1]>y[1]){
			swap(x[1], y[1]);
		}
		x_=(x[0]>=x[1])?x[0]:x[1];
		y_=(y[0]>=y[1])?y[1]:y[0];
		
		if((x[0]<=x[1]&&y[0]>=x[1]&&x[0]<=y[1]&&y[0]<=y[1])||(x[0]>=x[1]&&y[0]<=y[1]&&y[0]<=y[1]))
			ans=((x_-y_)>0)?x_-y_:y_-x_;
		else if((x[0]>=x[1]&&y[0]<=x[1]&&x[0]>=y[1]&&y[0]>=y[1])||(x[0]<=x[1]&&y[0]>=y[1]&&y[0]>=y[1]))
			ans=((x_-y_)>0)?x_-y_:y_-x_;
		printf("A = (%d, %d), B = (%d, %d), intersection length = %d\n", x[0], y[0], x[1], y[1], ans);
		ans=0;
	}
	
}