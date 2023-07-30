#include <bits/stdc++.h>// khieu vu, nu thap nhat di cung nam thap nhat
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;// n la nam, m la nu
	int a[n], b[m];
	for(int &x: a) cin>>x;
	for(int &x: b) cin>>x;
	sort(a,a+n);
	sort(b,b+m);
	int i=0, j=0;// dung lam con tro
	int dem=0;
	while(i<n&&j<m){
		if(a[i]>b[j]){
			dem++;
			i++;
			j++;
		}
		else{
			i++;
		}
	}
	cout<<dem;
}