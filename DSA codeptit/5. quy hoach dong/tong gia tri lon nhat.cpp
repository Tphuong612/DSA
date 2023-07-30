#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=1;
//	cin>>t;
	while(t--){
		int n, M;// n so luong do vat, M la khoi luong tui
		cin>>n>>M;
		int a[n+1];// bang khoi luong do vat;
		int c[n+1];// bang gia tri do vat
		for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
		int d[n+1][M+1];// bang phuong an
		memset(d, 0, sizeof(d));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=M;j++){
				d[i][j]=d[i-1][j];// neu khong them vao tui
				if(j>=a[i]){// j la trong luong
					d[i][j]=max(d[i][j], d[i-1][j-a[i]]+c[i]);
				}
			}
		}
		cout<<d[n][M]<<endl;
	}
}
