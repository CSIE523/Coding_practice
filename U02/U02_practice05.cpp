#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int up=0, low=0;
	cin >> str;
	for(int i=0;i<str.length();i++){
		if(str.at(i)-'a'>=0 && str.at(i)-'a' < 26)
			low+=1;
		else 
			up+=1;
	}
	cout << "Up = " << up << ", " << "Low = " << low;
}