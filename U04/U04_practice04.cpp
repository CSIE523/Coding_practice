#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	string o="O";
	cin >> s;
	int rcd=0;
	int sum=0;
	for(int i=0;i<s.size();i++){
		if(s.at(i)==o.at(0)){
			sum+=(++rcd);
		}else{
			rcd=0;
		}
	}
	cout << sum;
}