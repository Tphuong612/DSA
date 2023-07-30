#include <bits/stdc++.h>
using namespace std;
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
	string s;
	cin>>s;
	if(s.length()==1){
		if(s=="0") cout<<"YES";
		else cout<<"NO";
	}
	else{
		string check="";
		for(int i=s.length()-2;i<s.length();i++) check+=s[i];
		int k=stoi(check);
		if(k%25==0) cout<<"YES";
		else cout<<"NO";
	}
//	}
}
