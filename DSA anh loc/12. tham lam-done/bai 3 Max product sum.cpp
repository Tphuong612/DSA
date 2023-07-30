#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=1;
//	cin>>t;
	long long m= 1000000007;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n);
		long long s=0;
		sort(a, a+n);
		for(int i=0;i<n;i++){
			s+=(a[i]*i)%m;
			s%=m;
		}
		cout<<s<<endl;
	}
}
