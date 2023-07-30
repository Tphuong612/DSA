#include <bits/stdc++.h>
using namespace std;
void solve(string s){
	stack <string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			st.push(string(1, s[i]));
		}
		else{
			string s1=st.top(); st.pop();
			string s2=st.top(); st.pop();
			string res= s1 + s2 + s[i];
			st.push(res);
		}
	}
	cout<<st.top()<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
}
