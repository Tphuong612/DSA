#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	stack <int> st;
	while(t--){
		string s;
		cin>>s;
		if(s=="top"){
			if(!st.empty()) cout<<st.top();
			else cout<<"NONE";
			cout<<endl;
		}
		if(s=="push"){
			int n;
			cin>>n;
			st.push(n);
		}
		if(s=="pop" && !st.empty()){
			st.pop();
		}
	}
}
