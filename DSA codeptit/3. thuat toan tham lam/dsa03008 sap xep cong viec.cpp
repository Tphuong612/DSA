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
		vector <pair<int, int>> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i].first;
		}
		for(int i=0;i<n;i++){
			cin>>v[i].second;
		}
		sort(v.begin(), v.end(), cmp);
		int dem=0, check=0;
		for(int i=0;i<n;i++){
//			cout<<v[i].first<<" "<<v[i].second<<endl;
			if(v[i].first>=check){
				dem++;
				check=v[i].second;
			}
		}
		cout<<dem<<endl;
	}
}
