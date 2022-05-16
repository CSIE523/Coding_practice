#include<stdio.h>

int main(){
	char str[100];
	int up = 0, low = 0;
	scanf("%s", str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]>=65 &&str[i]<=90)
			up++;
		else 
			low++;
	}
	printf("Up = %d, Low = %d", up, low);
}