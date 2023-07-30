#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t=1;
	//cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		int a[n];
		for(auto &x: a) cin>>x;
		sort(a, a+n);
		if(binary_search(a, a+n, k)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
