#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int n;
	cin>>n;
	vector <pair<ll, ll>> v;
	for(int i=0;i<n;i++){
		ll x, y;
		cin>>x>>y;
		v.push_back({x,1});// khach vao tang len 1
		v.push_back({y,-1});// khach ra giam di 1
	}
	sort(v.begin(), v.end());
//	for(auto x: v) cout<<x.first<<" "<<x.second<<endl;
	int dem=0, ans=-1;
	for(auto x: v){
		dem+=x.second;
		ans=max(ans, dem);
	}
	cout<<ans;
}
