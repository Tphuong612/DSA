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
ll dao(ll a){
	string s=to_string(a);
	reverse(s.begin(), s.end());
//	for(int i=0; i<s.length()/2; i++){
//		swap(s[i], s[s.length()-1-i]);
//	}
	ll r=stoll(s);
	return r;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll k=dao(n);
		cout<<bipow(n, k)<<endl;
	}
}
