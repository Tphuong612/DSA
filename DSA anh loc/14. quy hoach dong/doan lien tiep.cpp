#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int dp[n+1];// day con tang ket thuc tai chi so i
		for(int i=1;i<=n;i++) dp[i]=1;
		for(int i=1;i<=n;i++){
			for(int j=i-1;j>=1;j--){
				if(a[i]>=a[j]) dp[i]++;
				else break;
			}
		}
		for(int i=1;i<=n;i++) cout<<dp[i]<<" ";
		cout<<endl;
	}
}
