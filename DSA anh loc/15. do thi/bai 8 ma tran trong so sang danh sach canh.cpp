#include <bits/stdc++.h>
using namespace std;
struct canh{
	int i;
	int j;
	int trso;// trong so
};
int main()
{
	int n;
	cin>>n;
	int a[n+5][n+5];
	vector <canh> v;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]&&j>i){
				v.push_back({i, j, a[i][j]});
			}
		}		
	}
	for(auto x: v){
		cout<<x.i<<" "<<x.j<<" "<<x.trso<<endl;
	}
}
