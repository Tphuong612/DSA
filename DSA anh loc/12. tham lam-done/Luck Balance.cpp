#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int >a, pair<int, int> b){
	return a.first>b.first;
}
int main()
{
	vector<pair<int, int >> v;
	int n, k;
	cin>>n>>k;
	long long luck=0;
	for(int i=0;i<n;i++){
		int x, y;
		cin>>x>>y;
		if(y==0) luck+=x;
		else v.push_back({x,y});
	}

	sort(v.begin(), v.end(), cmp);
	for(int i=0;i<v.size();i++){
		if(i<k) luck+=v[i].first;
		else luck-=v[i].first;
	}
	cout<<luck<<endl;
}
