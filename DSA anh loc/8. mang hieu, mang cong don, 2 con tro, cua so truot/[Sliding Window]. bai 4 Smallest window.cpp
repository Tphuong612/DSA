#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	map<char, int> m;
	set <char> st(s.begin(), s.end());
	
	int k=st.size();
	int l,r;
	for(int i=0;i<s.length();i++){
		if(m.size()!=k){
			m[s[i]]++;
			
		}
		else{
			r=i;
			break;
		}
	}
//	cout<<r<<" ";
	for(int i=0;i<=r;i++){
		if(m.size()==k){
			m[s[i]]--;
			if(m[s[i]]==0) m.erase(s[i]);
		}
		else{
			l=i-1;
			break;
		}
	}
//	cout<<l<<" ";
	cout<<r-l<<" ";
}
