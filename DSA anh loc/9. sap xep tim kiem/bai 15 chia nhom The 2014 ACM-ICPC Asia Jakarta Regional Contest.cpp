#include <bits/stdc++.h>// chia nhom => dem khe
using namespace std;
// 1 2 3 4   6 7   9
int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int &x: a) cin>>x;
	sort(a, a+n);
	int dem=0;// dung de dem khe
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]>k) dem++;
	}
	cout<<dem+1;// so nhom bang so khe + 1;
}
