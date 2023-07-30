#include <bits/stdc++.h>
using namespace std;
int check(string s){
	stack <char> st;
	bool ok=true;
	int dem=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' ||s[i]=='[') 
			st.push(s[i]);
		else if(s[i]==')'){
			if(st.size()==0){
				dem=0;
			}
			else if(st.top()=='(') st.pop();
		}
		else if(s[i]==']'){
			if(st.size()==0){
				dem=0;
			}
			else if(st.top()=='[') dem++;
		}
	}
	return dem;
}
int main()
{
	string s;
	cin>>s;
	cout<<check(s);
}
