#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		map <int, int> m;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			m[x]++;
		}
		auto it=m.find(k);// tra ve chi so;
		if(it!=m.end())
			{
				for(auto i:m){
					if(k==i.first) {
						cout<<i.second<<endl;
						break;
					}
				}
			}
		else cout<<"-1"<<endl;
	}
}

