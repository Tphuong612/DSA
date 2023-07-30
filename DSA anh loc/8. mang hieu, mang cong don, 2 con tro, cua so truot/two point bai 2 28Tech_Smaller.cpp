#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long a[n], b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int j=0;j<m;j++) cin>>b[j];
	int i=0,j=0;

	while(i<n&&j<m){
		if(a[i]<b[j]){
			i++;// i dong vai tro nhu bien dem 
		}
		
		else{
			cout<<i<<" ";
			j++;
		}
	}
	while(j<m){
		cout<<i<<" ";
		j++;
	}
}
