#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll m=1e9+7;
ll bipow(ll a, ll b){
	if(b==0) return 1;
	ll x=bipow(a, b/2)%m;
	if(b%2==0) return x%m*x%m;
	else return x%m*x%m*a%m;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		cout<<bipow(n, k)%m<<endl;
	}
}
