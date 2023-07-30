#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long, long> a, pair<long long, long long> b)
{
	return a.second<b.second;
}
int main()
{
	int n;
	cin>>n;
	vector<pair<long long, long long>> v;
	for(int i=0;i<n;i++){
		long long x, y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(), v.end(), cmp);
	
	long long tong=0, dem=-1, ans=0;
	for(auto x: v){
		if(tong<x.first){
			++ans;
			tong=x.second;
			dem=max(dem, ans);
		}
	}
	cout<<dem;
}
