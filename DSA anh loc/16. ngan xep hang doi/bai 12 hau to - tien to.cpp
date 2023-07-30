#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <string> st;
	for(int i=0; i<s.length(); i++){
		if(isalpha(s[i])) st.push(string(1, s[i]));
		else{
			string a=st.top(); st.pop();
			string b=st.top(); st.pop();
			string t=s[i]+b+a;
			st.push(t);
		}
	}
	cout<<st.top();
}
