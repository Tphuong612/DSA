#include <bits/stdc++.h>// vat con co nhieu sua nhat truoc
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n, greater<int>());

	long long s=0;
	for(int i=0;i<n;i++)
		if(a[i]-i>=0) s+=a[i]-i;
	cout<<s;
	
}
