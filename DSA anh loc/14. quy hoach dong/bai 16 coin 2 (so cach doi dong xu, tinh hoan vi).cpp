#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, s;// n so luong dong coin, s la tong so dong coin
	cin>>n>>s;
	int a[n];// mang coin
	for(int i=0;i<n;i++) cin>>a[i];
	long long dp[s+1]={0};// so luong dong coin co luong tien la s
	dp[0]=1;
	for(int i=1;i<=s;i++){
		for(int c: a){
			if(i>=c){
				dp[i]+=dp[i-c];
				dp[i]%=1000000007;
			}
		}
	}
	cout<<dp[s];
}
