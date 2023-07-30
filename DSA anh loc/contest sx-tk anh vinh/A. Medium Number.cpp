#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n=3;
		int a[5];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n);
		cout<<a[1]<<endl;
	}
}
