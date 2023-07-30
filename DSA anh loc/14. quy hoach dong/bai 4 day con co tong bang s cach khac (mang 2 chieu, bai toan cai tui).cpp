#include <bits/stdc++.h>// bai toan day con co tong bang s, chinh la cai tui 
using namespace std;
int f[205][100001];
int main()
{
	int n, s;// co tong la s
	cin>>n>>s;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<=n;i++) f[i][0]=1;// lay i ptu dau tien co tong =0, luon dung vi chang lay cai nao
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s;j++){
			if(j>=a[i]) f[i][j]=max(f[i-1][j], f[i-1][j-a[i]]);// max la 1, tuc la nhan gia tri true
			else f[i][j]=f[i-1][j];
			// f[i-1][j]= ko lay
			// f[i-1][j-a[i]]: lay
		}
	}
	cout<<f[n][s];
}
