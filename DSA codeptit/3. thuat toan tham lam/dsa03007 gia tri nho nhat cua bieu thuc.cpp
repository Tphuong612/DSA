#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n], b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a, a+n);
		sort(b, b+n, greater<long long>());
		long long s=0;
		for(int i=0;i<n;i++){
			s+=(long long)a[i]*b[i];
		}
		cout<<s<<endl;
	}
}
