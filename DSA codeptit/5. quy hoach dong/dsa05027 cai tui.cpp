#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, v; cin>>n>>v;// n so luong do vat, v the tich tui
		int a[n+1];// bang the tich do vat
		int c[n+1];// bang gia tri do vat
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>c[i];
		int d[n+1][v+1];
		memset(d, 0, sizeof(d));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=v;j++){
				d[i][j]=d[i-1][j];// neu khong them vao do vat thu i
				if(j>=a[i]){
					d[i][j]=max(d[i][j], d[i-1][j-a[i]]+c[i]);
				}
			}
		}
		cout<<d[n][v]<<endl;
	}
}
