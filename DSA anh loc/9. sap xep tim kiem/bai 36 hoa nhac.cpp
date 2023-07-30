#include <bits/stdc++.h>
bool mua[200005];
using namespace std;
int main()
{
	int n, m;// n ve, m khach
	cin>>n>>m;
	long long a[n], b[m];
	multiset <long long > ms;
	for(auto &x: a){
		cin>>x;
		ms.insert(x);
	}
	for(auto &x: b) cin>>x;
	for(int i=0;i<m;i++){
		auto it=ms.upper_bound(b[i]);
		if(it!=ms.begin()){
			it--;
			if(*it<=b[i]){
				cout<<*it<<endl;
				ms.erase(it);
			}
			else cout<<"-1"<<endl;
		}
		else cout<<"-1"<<endl;
	}
	
}
