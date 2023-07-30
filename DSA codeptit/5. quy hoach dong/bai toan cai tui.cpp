/* bai toan cai tui
w[i]: trong  luong cua cai tui
v[i]: gia tri do vat thu i
s: tong luong toi da cua tui
dp[i][j]: gia tri lon nhat cua cai tui khi lua chon do vat va co trong luong la j
dp[i-1][j]: neu khong lua chon do vat thu i vao cai tui
max(dp[i][j], dp[i-1][j-w[i]]+v[i]): neu lua chon do vat thu i
ket qua se la dp[n][s];
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, s; cin>>n>>s;
	int w[n+1], v[n+1];
	for(int i=1;i<=n;i++) cin>>w[i];
	for(int i=1;i<=n;i++) cin>>v[i];
	int dp[n+1][s+1];
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s;j++){
			dp[i][j]=dp[i-1][j];// neu ko them do vat thu i vao
			if(j>=w[i]){
				dp[i][j]=max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
			}
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<dp[n][s];
}
