#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	set<long long> s;
	for(int i=0;i<n-1;i++){
		s.insert(abs(a[i]-a[i+1]));
	}
	cout<<*s.begin();
}
