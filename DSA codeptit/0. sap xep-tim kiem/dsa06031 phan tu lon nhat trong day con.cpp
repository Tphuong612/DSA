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
		for(int i=0;i<n;i++) cin>>a[i];
		multiset <int > ms;
	
		for(int i=0;i<k;i++){//khoi tao cua so truot
			ms.insert(a[i]);
		}
		cout<<*ms.rbegin()<<" ";
		
		for(int i=1;i<=n-k;i++){
			auto it=ms.find(a[i-1]);
			ms.erase(it);
			ms.insert(a[i-1+k]);
			cout<<*ms.rbegin()<<" ";
		}	
		cout<<endl;
	}
}