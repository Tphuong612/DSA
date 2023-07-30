#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector <ll> v;
ll n, a[20];
vector<vector<ll>> kq;
void sinh(){
	do{
		vector<ll> tmp;
		for(int i=0;i<v.size();i++) tmp.push_back(v[i]);
		kq.push_back(tmp);
	}
	while(next_permutation(v.begin(), v.end()));
}

int main()
{
	cin>>n;
	map <ll, ll> m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	for(int i=0;i<n;i++){// loai bo trung nhau
		if(m[a[i]]!=0){
			v.push_back(a[i]);
			m[a[i]]=0;
		}
	}
	sort(v.begin(), v.end());
	sinh();
	for(int i=kq.size()-1;i>=0;i--){
		for(int j=0;j<kq[i].size();j++) cout<<kq[i][j]<<" ";
		cout<<endl;
	}
}
