#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	string s;
	while(cin>>s){
		if(s=="push"){
			int x;
			cin>>x;
			v.push_back(x);
		}
		if(s=="show"){
			if(!v.empty()){
				for(auto i: v) cout<<i<<" ";
			}
			else cout<<"empty";
			cout<<endl;
		}
		if(s=="pop"){
			v.pop_back();
		}
	}
	
}