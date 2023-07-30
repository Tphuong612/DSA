#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<ll, ll>a, pair<ll, ll> b)
{
	return a.second<b.second;
}
int main()
{
	int n;
	cin>>n;
	vector<pair<ll, ll>> v;
	for(int i=0;i<n;i++){
		ll x, y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(), v.end(), cmp);
	ll check=0, dem=0, ans=-1;
	for(auto x: v){
		if(check<=x.first){
			++dem;
			ans=max(ans, dem);
			check=x.second;
		}
	}
	cout<<dem;
}
