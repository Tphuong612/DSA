#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	map<char, int> m;
	for(int i=0;i<s.length();i++) // in thuong
		m[s[i]]++;
	int min=1000005, max=-1;
	char gtrmin, gtrmax;
	for(auto x:m){
		if(x.second>=max){
			max=x.second;
			gtrmax=x.first;
		}
		if(x.second<=min){
			min=x.second;
			gtrmin=x.first;
		}
	}
	cout<<gtrmax<<" "<<max<<endl;
	cout<<gtrmin<<" "<<min<<endl;
	
}

