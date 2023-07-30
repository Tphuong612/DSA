#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;// n dinh, m canh
	
	vector <int> a[1005];// danh sach ke
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}

	for(int i=1;i<=n;i++){
		cout<<i<<" "<<": ";
		sort(a[i].begin(), a[i].end());
		for(auto k: a[i]){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}
