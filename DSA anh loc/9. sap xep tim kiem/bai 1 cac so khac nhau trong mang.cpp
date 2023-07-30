#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	set<long long> s;
	for(long long &x: a){
		cin>>x;
		s.insert(x);
	}
	cout<<s.size();
}
