#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int n;
	cin>>n;
	ll a[n];
	priority_queue <ll> q;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		q.push(a[i]);
	}
	ll chi_phi=0;
	ll m=1e9+7;
	while(q.size()>1){
		ll n1=q.top(); q.pop();
		ll n2=q.top(); q.pop();
		chi_phi+=(n1+n2)%m;
		chi_phi%=(ll) m;
		q.push(n1+n2);
	}
	cout<<chi_phi<<endl;
}
