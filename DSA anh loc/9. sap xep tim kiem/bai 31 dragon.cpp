#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first<b.first;
}
int main()
{
	long long n, s;
	cin>>n>>s;
	vector<pair<int, int>> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first>>v[i].second;
	}
	int check=1;
	sort(v.begin(), v.end(), cmp);
	for(int i=0;i<n;i++){
		if(s<=v[i].first){
			check=0;
			cout<<"NO";
			break;
		}
		else{
			s+=v[i].second;
		}
	}
	if(check==1)cout<<"YES";
}