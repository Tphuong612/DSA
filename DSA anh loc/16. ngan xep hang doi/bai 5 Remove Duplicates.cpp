#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <char> st;
	for(int i=0; i<s.length(); i++){
		if(st.empty()) st.push(s[i]);
		else{
			if(s[i]==st.top()) st.pop();
			else st.push(s[i]);	
		}
	}
	
	string kq="";
	while(!st.empty()){
		kq += st.top();
		st.pop();
	}
	
	if(kq.length()>0){
		for(int i=kq.length()-1; i>=0; i--) cout<<kq[i];
	}
	else cout<<"EMPTY";
	cout<<endl;
}
