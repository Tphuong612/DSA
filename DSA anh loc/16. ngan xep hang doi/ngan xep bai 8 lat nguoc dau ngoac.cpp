#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	int open=0, close=0;
	stack <char> st;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='(') open++;
		else close++;
		
		if(s[i]=='(') st.push(s[i]);
		else{
			if(!st.empty() && st.top()=='('){
				st.pop();
				open--;
				close--;
			}
		}
	}
	//cout<<close<<" "<<open;
	int ans= open/2 + close/2;
	ans += open%2 + close%2;
	cout<<ans;
}
