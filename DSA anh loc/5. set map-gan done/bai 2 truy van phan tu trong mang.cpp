#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	set <long long> s;
	for(long long i=0;i<n;i++){
		long long x;
		cin>>x;
		s.insert(x);
	}
	int q;
	cin>>q;
	while(q--)
		{
			long long x;
			cin>>x;
			if(s.find(x)!=s.end()) cout<<"YES\n";
			else cout<<"NO\n";
		}
}
