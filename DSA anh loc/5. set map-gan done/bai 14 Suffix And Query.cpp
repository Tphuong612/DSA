#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(long long &i: a) cin>>i;
	set <long long> se;
	long long dem[n];
	for(int i=n-1;i>=0;i--){
		se.insert(a[i]);
		dem[i]=se.size();
	}
	int q;
	cin>>q;
	while(q--){
		int l;
		cin>>l;
		cout<<dem[l]<<endl;
	}
}
