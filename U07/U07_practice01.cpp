#include<iostream>
#include<algorithm>
using namespace std;

void get_randomN(int a[])
{
    srand(2022);
    for (int i=0; i<100000; i++) a[i] = rand();
}

int main(){
	int a[100000];
	get_randomN(a);
	sort(a, a+100000);
	int n;
	while(scanf("%d", &n)!=EOF){
		printf("%d\n", a[n]);
	}
	
}
