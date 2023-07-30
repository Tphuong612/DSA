#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y)
{
	return x.second<y.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int, int>> v;
		for(int i=0;i<n;i++){
			int x, y;
			cin>>x>>y;
			v.push_back({x,y});
		}
		sort(v.begin(), v.end(), cmp);
		int dem=0, ans=0, check=-1;
		for(int i=0;i<n;i++){
			if(v[i].first>=check){
				dem++;
				check=v[i].second;
			}
			ans=max(dem, ans);
		}
		cout<<ans<<endl;
	}
}
