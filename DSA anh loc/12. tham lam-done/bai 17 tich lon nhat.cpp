#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cin>>m;
	long long b[m];
	vector <long long> a;
	for(int i=0;i<m;i++){
		cin>>b[i];
//		if(b[i]!=0) a.push_back(b[i]);
		a.push_back(b[i]);
	}
	sort(a.begin(), a.end());
	int n=a.size();
	vector<long long> max;
	max.push_back(a[0]*a[1]);// 2 so am
	max.push_back(a[n-1]*a[n-2]); //2 so duong
	max.push_back(a[n-1]*a[n-2]*a[n-3]);// 3 so duong
	max.push_back(a[n-1]*a[1]*a[0]);//2 am, 1 duong
	sort(max.begin(), max.end());
	long long ans=*max.rbegin();
	if(ans>0) cout<<ans;
	else cout<<"0";
}
