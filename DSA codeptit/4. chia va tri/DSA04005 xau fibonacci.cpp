#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f[100];
void init(){
	f[1]=1;
	f[2]=1;
	for(int i=3; i<=93; i++){
		f[i]=f[i-1]+f[i-2];
	}
}
char solve(ll k, ll n){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]) return solve(k, n-2);
	else return solve(k-f[n-2], n-1);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		init();
		cout<<solve(k, n)<<endl;
	}
}
