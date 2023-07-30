#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
	stack <int> st;
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int n;
			cin>>n;
			st.push(n);
		}
		if(s=="PRINT"){
			if(!st.empty()){
				cout<<st.top();
			}
			else cout<<"NONE";
			cout<<endl;
		}
		if(s=="POP"){
			if(!st.empty()) st.pop();
		}
	}
}
