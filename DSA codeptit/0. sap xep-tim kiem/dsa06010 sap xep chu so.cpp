#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set <int> cs;
		for(int i=0;i<n;i++)
			{
				long long x;
				cin>>x;
				string s=to_string(x);
				for(int i=0;i<s.size();i++){
					cs.insert(s[i]-'0');
				}
			}
		for(auto &i: cs){
			cout<<i<<" ";
		}
		cout<<endl;
		cs.clear();
	}
}
