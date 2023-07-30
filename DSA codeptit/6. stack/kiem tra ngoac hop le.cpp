#include <bits/stdc++.h>
using namespace std;
int check(string s){
	stack <char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		else{// neu gap dong ngoac
			if(st.empty()){
				return false;
			}
			else st.pop();
		}
	}
	if(st.empty()) return true;
	else return false;
}
int main()
{
	string s;
	cin>>s;
	if(check(s)) cout<<"bieu thuc hop le";
	else cout<<"bieu thuc khong hop le";
}
