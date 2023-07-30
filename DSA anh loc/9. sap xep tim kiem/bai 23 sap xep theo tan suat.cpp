#include <bits/stdc++.h>
using namespace std;
bool cmp1(pair<int, int> m, pair<int, int> h)//yeu cau 1
{
	if(m.second==h.second) return m.first<h.first;
	return m.second>h.second;
}
bool cmp2(pair<int, int> m, pair<int, int> h)// yeu cau 2
{
	return m.second>h.second;
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int, int>> a(n), b, c(n);
	map <int, int> m;
	int tmp[n];
	for(int i=0;i<n;i++){
		cin>>tmp[i];
		m[tmp[i]]++;
	}
	for(int i=0;i<n;i++){// mang a in ra theo yeu cau 1
		a[i].first=c[i].first=tmp[i];
		a[i].second=c[i].second=m[tmp[i]];
	}
	sort(a.begin(), a.end(), cmp1);
	for(auto it: a) cout<<it.first<<" ";
	cout<<endl;
	
	for(int i=0;i<n;i++){//in ra theo yeu cau 2
		if(m[c[i].first]!=0){
			b.push_back({c[i].first, c[i].second});
			m[c[i].first]=0;
		}
	}
	stable_sort(b.begin(), b.begin()+b.size(), cmp2);
	for(auto it: b){
		for(int i=1;i<=it.second;i++)
			cout<<it.first<<" ";
	}
	cout<<endl;
	
}
