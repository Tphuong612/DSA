#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, m, k;// n so nguoi dang ki, m can ho, chenh lech toi da k
	cin>>n>>m>>k;
	long long mongmuon[n], canho[m];
	for(auto &x: mongmuon) cin>>x;
	for(auto &x: canho) cin>>x;
	sort(mongmuon, mongmuon+n);
	sort(canho, canho+m);
	long long i=0, j=0, dem=0;
	while(i<n&&j<m){
		if(abs(mongmuon[i]-canho[j])<=k){
			++dem;
			i++; j++;
		}
		else if(mongmuon[i]-canho[j]>k) j++;
		else i++;
	}
	cout<<dem;
}
