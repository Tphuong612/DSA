#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int>b)
{
	return a.first<b.first;
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int, int>> v;
	for(int i=0;i<n;i++){
		int x, y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(), v.end(), cmp);
//	for(auto it: v){
//		cout<<it.first<<" "<<it.second<<endl;
//	}
	long long s=0;
	for(int i=0;i<n;i++){
		if(s<v[i].first) s=v[i].first;
		s+=v[i].second;
	}
	cout<<s;
}
