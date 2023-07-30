#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		sort(s.begin(), s.end());
		int k=s[s.length()-1]-'a'+1;
		cout<<k<<endl;
	}
}
