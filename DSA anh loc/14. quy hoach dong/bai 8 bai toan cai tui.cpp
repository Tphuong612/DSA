#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, v;
	cin>>n>>v;//n do vat, trong long toi da v
	int f[n+1][v+1];// xet i do vat dau tien co trong luong toi da la j
	int w[n+1];// mang trong luong
	int c[n+1];// mang gia tri
	for(int i=1;i<=n;i++) cin>>w[i];
	for(int i=1;i<=n;i++) cin>>c[i];
	memset(f, 0, sizeof(f));
	for(int i=1;i<=n;i++){// xet tung do vat
		for(int j=1;j<=v;j++){
			if(j>=w[i]) f[i][j]=max(c[i]+f[i-1][j-w[i]], f[i-1][j]);// truong hop lay do vat, 
			else f[i][j]=f[i-1][j];
		}	
	}
	cout<<f[n][v];
}
