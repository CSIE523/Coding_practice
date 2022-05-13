#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int tmp=1;
	int ans=0;
	for(int i=4;i>=0;i--){
		if(s.at(i)=='0')
			ans+=(tmp*0);
	    else if(s.at(i)=='1')
			ans+=(tmp*1);
		else if(s.at(i)=='2')
			ans+=(tmp*2);
		else if(s.at(i)=='3')
			ans+=(tmp*3);
		else if(s.at(i)=='4')
			ans+=(tmp*4);
		else if(s.at(i)=='5')
			ans+=(tmp*5);
	    else if(s.at(i)=='6')
			ans+=(tmp*6);
		else if(s.at(i)=='7')
			ans+=(tmp*7);
		else if(s.at(i)=='8')
			ans+=(tmp*8);
		else if(s.at(i)=='9')
			ans+=(tmp*9);
		else if(s.at(i)=='A')
			ans+=(tmp*10);
	    else if(s.at(i)=='B')
			ans+=(tmp*11);
		else if(s.at(i)=='C')
			ans+=(tmp*12);
		else if(s.at(i)=='D')
			ans+=(tmp*13);
		else if(s.at(i)=='E')
			ans+=(tmp*14);
		else if(s.at(i)=='F')
			ans+=(tmp*15);
		tmp*=16;
	}
	cout << ans;
}

