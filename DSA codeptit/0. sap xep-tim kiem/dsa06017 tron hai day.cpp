#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		long long a[n], b[m];
		vector <long long> v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
			v.push_back(b[i]);
		}
		sort(v.begin(), v.end());
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}
