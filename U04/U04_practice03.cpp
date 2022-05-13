#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s = to_string(n);
	string s_tmp;
	char tmp;
	for(int i=s.size()-1;i>=0;i--)
		s_tmp+=s.at(i);
	cout << n+stoi(s_tmp) << endl; 
}v