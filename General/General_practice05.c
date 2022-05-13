#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char a[100];
    char b[100];
    int n;
	scanf("%d", &n);
    int m = n;
    int i = 0;
    int cnt;
    sprintf(a, "%d", n);
    while(m!=0){
        m/=10;
        i++;
    }
    for(int j=0;j<i;j++){
        b[j] = a[i-1-j];
    }
    printf("%d\n", n+atoi(b));
	
}