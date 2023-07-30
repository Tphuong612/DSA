#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n], b[n];
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
				b[i]=a[i];
			}
		sort(b,b+n);
		for(int i=0;i<n/2;i++){
			if(a[i]!=b[i]) { 
				cout<<i+1;
				break;
			}
		}
		cout<<" ";
		for(int i=n-1;i>=n/2;i--){
			if(a[i]!=b[i]) { 
				cout<<i+1;
				break;
			}
		}
		cout<<endl;
	}
}
