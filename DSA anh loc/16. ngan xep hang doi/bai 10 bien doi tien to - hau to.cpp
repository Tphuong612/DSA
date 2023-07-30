#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <string> st;
	for(int i=s.length()-1; i>=0; i--){
		if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
			string a=st.top(); st.pop();
			string b=st.top(); st.pop();
			string t = a + b + s[i] ;
			st.push(t);
		}
		else st.push(string(1, s[i]));
	}
	cout<<st.top();
}
