#include <bits/stdc++.h>// khoang cach max nhat
using namespace std;
int main()
{
	int n,l;
	cin>>n>>l;
	int a[n];
	for(int &x: a) cin>>x;
	sort(a, a+n);
//	for(int x: a) cout<<x<<" ";
	double d;
	set<int> s;
	s.insert(a[0]-0); s.insert(l-a[n-1]);
	for(int i=1;i<n;i++) s.insert(a[i]-a[i-1]);
//	cout<<*s.rbegin();
	if(*s.rbegin()==a[0]-0) d=a[0]-0;
	else if(*s.rbegin()==l-a[n-1]) d=l-a[n-1];
	else d=*s.rbegin()/2.0;
	cout<<fixed<<setprecision(10)<<d;
}
