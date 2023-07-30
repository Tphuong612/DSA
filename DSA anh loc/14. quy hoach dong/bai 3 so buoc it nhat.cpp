#include <bits/stdc++.h>// so buoc it nhat= n-day con tang dai nhat
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	int dp[n+1];// day con tang chat ket thuc tai chi so i
	fill(dp, dp+n, 1);
	for(int i=0;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[i]>a[j]) dp[i]=max(dp[i], dp[j]+1);
		}
	}
	cout<<n-*max_element(dp, dp+n);
}
