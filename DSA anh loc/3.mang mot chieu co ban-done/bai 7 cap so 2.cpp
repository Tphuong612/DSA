#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	set <int> st;
	for(int i=0;i<n-1;i++)
	{
		st.insert(a[i+1]-a[i]);
	}
	cout<<*st.begin();
}
