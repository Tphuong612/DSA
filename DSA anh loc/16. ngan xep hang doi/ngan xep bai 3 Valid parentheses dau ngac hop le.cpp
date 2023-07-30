#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <char> st;
	int check=1;
	for(int i=0; i<s.size(); i++){
		if( s[i]=='{' || s[i]=='[' || s[i]=='(' ){
			st.push(s[i]);
		}
		else{
			if(st.empty()){
				check=0;
				break;
			}
			else{
				if(s[i]==')' && st.top()=='(') st.pop();
				else if(s[i]==']' && st.top()=='[') st.pop();
				else if(s[i]=='}' && st.top()=='{') st.pop();
				else{
					check=0;
					break;
				}
			}
		}
	}
	if(check==1) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
