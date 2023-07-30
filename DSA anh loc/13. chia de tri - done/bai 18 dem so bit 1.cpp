#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int count(ll k, ll n){
	if(n<2) return n;
	ll x=log2(n)+1;// luon lm tron len, ke ca 2.0 -> 3
	ll m=pow(2, x)-1;
	if(k>m) return 0;
	if(k<=m/2) return count(k, n/2);
	else if(k==m/2+1) return n%2;
	else return count(k-m/2-1, n/2);
}
void run_case(){
	ll n, l, r;
	cin>>n>>l>>r;
	ll ans=0;
	if(l>r) swap(l,r);
	for(ll i=l;i<=r;i++){
		ans+=count(i,n);// vi tri thu i cua day n
	}
	cout<<ans<<endl;
}
int main()
{
	run_case();
}
