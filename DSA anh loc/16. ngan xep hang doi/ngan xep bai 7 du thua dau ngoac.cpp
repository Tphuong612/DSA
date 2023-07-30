#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ktr(string s){
	stack <char> st;
	int check;
	for(int i=0; i<s.length(); i++){
		if(s[i] != ')') st.push(s[i]);
		else{
			if(st.top()=='(') return false;
			int check=0;
			while(st.top() != '('){
				if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/') check=1;
				st.pop();
			}
			st.pop();
			if(check==0){// thua dau ngoac
				return false;
			}
		}
	}
	return true;
}
int main()
{
	string s;
	cin>>s;
	if(!ktr(s)) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
