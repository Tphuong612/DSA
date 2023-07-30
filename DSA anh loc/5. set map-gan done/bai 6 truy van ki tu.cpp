#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	map <char, int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	int max=-1, min=999999;
	char kt1;
	for(auto i: m){
		if(i.second>max){
			max=i.second;
			kt1=i.first;
		}
	}
	cout<<kt1<<" "<<max<<endl;
	
	char kt2;
	for(auto i: m){
		if(i.second<=min){
			min=i.second;
			kt2=i.first;
		}
	}
	cout<<kt2<<" "<<min<<endl;
	
	cout<<m.size();
}
