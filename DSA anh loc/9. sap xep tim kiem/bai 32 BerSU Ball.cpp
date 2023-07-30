#include <bits/stdc++.h>// dem so cap a[i]-b[j]<=1, b[j]-a[i]<=1
using namespace std;
int main()
{
	int n,m;// n nam, m nu
	cin>>n>>m;
	int a[n], b[m];
	for(int &x: a) cin>>x;
	for(int &x: b) cin>>x;
	sort(a, a+n);
	sort(b, b+m);
	int dem=0;
	int i=0, j=0;
	while(i<n&&j<m){
		if(abs(a[i]-b[j])<=1){
			dem++;
			i++; j++;
		}
		else if(a[i]-b[j]>1) j++;// tuc la a[i]>b[j];
		else i++;// tuc la a[i]<b[j]
	}
	cout<<dem;
}	
