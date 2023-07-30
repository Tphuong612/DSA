#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	long long a[n], b[m];
	map <long long, long long> ma,mb;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		ma[a[i]]++;
	}
	for(long long j=0;j<m;j++){
		cin>>b[j];
		mb[b[j]]++;
		 
	}
	long long i=0,j=0;
	long long dem=0;
	while(i<n||j<m){
		if(a[i]==b[j]){
			dem+=ma[a[i]]*mb[b[j]];
//			cout<<ma[a[i]]*mb[b[j]];
			i=i+ma[a[i]];
			j=j+mb[b[j]];
//			cout<<dem<<" ";
		}
		
		else if(a[i]<b[j]) i++;
		else j++;
	}
	cout<<dem;
}
