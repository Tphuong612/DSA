#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, s;
	cin>>n>>s;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	int dp[s+1];
	memset(dp, false, sizeof(dp));
	dp[0]=true;
	for(int i=0;i<n;i++){
		for(int j=s; j>=a[i];j--){
			if(dp[j-a[i]]==true) dp[j]=true;
		}
	}
	if(dp[s]) cout<<1;
	else cout<<0;
}
