#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<long long, long long>> a(n);
		for(auto &i: a){
			cin>>i.first>>i.second;
		}
		long long dp[n][2];
		dp[0][1]=a[0].second;
		dp[0][0]=0;
		for(int i=1;i<n;i++){
			if(a[i].first==a[i-1].first){
				dp[i][1]=min(dp[i-1][0], dp[i-1][1])+a[i].second;
				dp[i][0]=dp[i-1][1];
			}
			else{
				dp[i][0]=min(dp[i-1][0], dp[i-1][1]);
				dp[i][1]=min(dp[i-1][0], dp[i-1][1])+a[i].second;
			}
		}
		cout<<min(dp[n-1][0], dp[n-1][1])<<endl;
	}
}
