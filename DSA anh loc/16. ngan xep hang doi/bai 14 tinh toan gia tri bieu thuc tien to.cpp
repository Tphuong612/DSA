#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <int> st;
	for(int i=s.length()-1; i>=0; i--){
		if(isdigit(s[i])) st.push(stoi(string(1, s[i])));
		else{
			if(s[i]=='+'){
				int a=st.top(); st.pop();
				int b=st.top(); st.pop();
				int t=a+b;
				st.push(t);
			}
			if(s[i]=='-'){
				int a=st.top(); st.pop();
				int b=st.top(); st.pop();
				int t=a-b;
				st.push(t);
			}
			if(s[i]=='*'){
				int a=st.top(); st.pop();
				int b=st.top(); st.pop();
				int t=a*b;
				st.push(t);
			}
			if(s[i]=='/'){
				int a=st.top(); st.pop();
				int b=st.top(); st.pop();
				int t=a/b;
				st.push(t);
			}
		}
	}
	cout<<st.top();
}
