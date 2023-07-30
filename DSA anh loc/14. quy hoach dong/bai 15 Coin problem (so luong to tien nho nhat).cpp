#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, s;// n so luong dong coin, s la tong so dong coin
	cin>>n>>s;
	int a[n];// mang coin
	for(int i=0;i<n;i++) cin>>a[i];
	int dp[s+1];// so luong dong coin co luong tien la s
	dp[0]=0;
	for(int i=1;i<=s;i++){
		dp[i]=1e9;
		for(int c: a){
			if(i>=c) dp[i]=min(dp[i], dp[i-c]+1);
		}
	}
	if(dp==1e9) cout<<-1;
	else cout<<dp[s];
}
