#include <bits/stdc++.h>
using namespace std;
void solve(string s){
	stack <string> st;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			st.push(string(1, s[i]));
		}
		else{
			string b=st.top(); st.pop();
			string a=st.top(); st.pop();
			string res='(' + a + s[i] + b + ')';
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
