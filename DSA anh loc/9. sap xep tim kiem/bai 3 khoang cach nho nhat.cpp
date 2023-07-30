#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(long long &x: a) cin>>x;
	
	sort(a, a+n);
	set <long long> s;
	for(int i=1;i<n;i++){
		s.insert(a[i]-a[i-1]);
	}
	cout<<*s.begin();
}
