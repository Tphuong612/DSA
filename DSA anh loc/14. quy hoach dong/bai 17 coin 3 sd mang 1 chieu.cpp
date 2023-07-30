#include <bits/stdc++.h>// bai toan day con co tong bang s, chinh la cai tui 
using namespace std;
int f[1000005];
int main()
{
	int n, s;// co tong la s
	cin>>n>>s;
	int a[n+1];
	int m=1e9+7;
	for(int i=1;i<=n;i++) cin>>a[i];
	f[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s;j++){
			if(j>=a[i]) f[j]=f[j]+f[j-a[i]];// max la 1, tuc la nhan gia tri true
			else f[j]=f[j];
			f[i][j]%=m;
			// f[j]= ko lay
			// f[i-1][j-a[i]]: lay trong truong hop ko tinh lap lai
			// f[i][j-a[i]] hoac f[j-a[i]]: lay trong truong hop co tinh lap lai
		}
	}
	cout<<f[s];
}
