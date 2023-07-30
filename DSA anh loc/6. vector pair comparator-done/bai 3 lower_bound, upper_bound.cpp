#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	
	auto it1=lower_bound(a,a+n,x)-a;
	if(it1!=n) cout<<it1<<endl;
	else cout<<"-1\n";
	
	auto it2=upper_bound(a,a+n,x)-a;
	if(it2!=n) cout<<it2<<endl;
	else cout<<"-1\n";
	
	auto it3=lower_bound(a, a+n, x);
	if(*it3==x) cout<<it3-a<<endl;
	else cout<<"-1\n";
	
	auto it4=upper_bound(a, a+n, x);
	if(*(it4-1)==x) cout<<it4-a-1<<endl;
	else cout<<"-1\n";
	
	cout<<it4-it3<<endl;
}
