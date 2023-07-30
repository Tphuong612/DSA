#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		multiset <int> ms;
		for(int &x: a){
			cin>>x;
			ms.insert(x);
		}
		long long s=0;
		
		for(int i=0;i<n-1;i++){
			long long k=*ms.begin();
			if(!ms.empty()){
				s+=*ms.begin();
				ms.erase(ms.begin());
			}
			
			if(!ms.empty()){
				s+=*ms.begin();
				k+=*ms.begin();
				ms.erase(ms.begin());
			}
			ms.insert(k);
			
		}
		cout<<s<<endl;
	}
}
