#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		vector <string> v;
		string tmp;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(auto x: v){
			stack <char> st;
			for(int j=0;j<x.size();j++){
				st.push(x[j]);
			}
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
			cout<<" ";
		}
		cout<<endl;
	}
}
