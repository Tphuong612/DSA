#include <bits/stdc++.h>
using namespace std;
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
		int n, m;
		cin>>n>>m;
		set<int> s;
		map <int, int> mp;
		for(int i=0;i<n;i++){// chua mang a[]
			int x;
			cin>>x;
			s.insert(x);
			mp[x]++;
		}
		for(int i=0;i<m;i++){// chua mang b[]
			int x;
			cin>>x;
			s.insert(x);
			mp[x]++;
		}
		for(auto &i:mp){
			if(i.second>1) cout<<i.first<<" ";
		}
		cout<<endl;
		for(auto &i:s){
			cout<<i<<" ";
		}
		cout<<endl;
		
//	}
}
