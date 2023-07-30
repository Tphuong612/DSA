#include <bits/stdc++.h>
using namespace std;
long long binpow(int a, int b)
{
	long long res=1;
	if(b==0) return 1;
	long long x =binpow(a,b/2);
	if(b%2==1) return x*x*a;
	else return x*x;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int x[n+5], y[m+5];
		for(int i=0;i<n;i++) cin>>x[i];
		for(int i=0;i<m;i++) cin>>y[i];
		int dem=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(binpow(x[i],y[j])>binpow(y[j],x[i])) dem++;
		cout<<dem<<endl;
	}
}
