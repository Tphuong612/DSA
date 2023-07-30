#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int m;//median
	multiset <long long> ms;
	for(int i=0;i<k;i++){//khoi tao cua so truot
		ms.insert(a[i]);
	}
	vector <long long > v(ms.begin(), ms.end());
	if(k%2==0) m=k/2-1;
	else m=k/2;
	cout<<v[m]<<" ";
	
	for(int i=1;i<=n-k;i++){// chay 
		ms.erase(ms.find(a[i-1]));
		ms.insert(a[i-1+k]);
		vector <long long > v(ms.begin(), ms.end());
		if(k%2==0) m=k/2-1;
		else m=k/2;
		cout<<v[m]<<" ";
	}	
}
