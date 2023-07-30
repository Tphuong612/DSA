#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	multiset <long long > ms;

	for(int i=0;i<k;i++){//khoi tao cua so truot
		ms.insert(a[i]);
	}
	cout<<*ms.begin()<<" "<<*ms.rbegin()<<endl;
	
	for(int i=1;i<=n-k;i++){
		auto it=ms.find(a[i-1]);
		ms.erase(it);
		ms.insert(a[i-1+k]);
		cout<<*ms.begin()<<" "<<*ms.rbegin()<<endl;
	}	
}
