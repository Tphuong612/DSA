#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int &x:a) cin>>x;
		sort(a, a+n);
		long long s1=0, s2=0;
		k=min(n-k, k);
		for(int i=0;i<n;i++){
			if(i<k) s1+=a[i];
			else s2+=a[i];
		}
		cout<<s2-s1<<endl;
	}
}
