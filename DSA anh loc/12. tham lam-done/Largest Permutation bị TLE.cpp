#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k;
	cin>>n>>k;
	int a[n+5], b[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int cnt=0;
	for(int i=0;i<n;i++){
		long long index_max=i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[index_max]) index_max=j;
		}
		if(a[index_max]!=a[i]) cnt++;
		swap(a[index_max], a[i]);
		if(cnt==k) break;
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
