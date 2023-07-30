#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, m, k;
		cin>>n>>m>>k;
		int a[n], b[m], c[k];
		for(int &x: a) cin>>x;
		for(int &x: b) cin>>x;
		for(int &x: c) cin>>x;
	
		int i=0, j=0, v=0;
		int check=0;
		while(i<n&&j<m&&v<k){
			if(a[i]==b[j]&&b[j]==c[v]){
				check=1;
				cout<<a[i]<<" ";
				i++; j++; v++;
			}
			else if(a[i]<=b[j]&&a[i]<=c[v]) i++;
			else if(b[j]<=a[i]&&b[j]<=c[v]) j++;
			else v++;
		}
		if(check==0) cout<<"NO";
		cout<<endl;
	}
}
