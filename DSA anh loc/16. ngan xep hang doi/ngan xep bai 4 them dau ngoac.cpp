#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <int> st;
	int dem=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='(') st.push(s[i]);
		else{
			if(!st.empty() && st.top()=='('){
				dem++;
				st.pop();
			}
		}
	}
	cout<<s.length() - dem*2 <<endl;
}
