#include <bits/stdc++.h>
using namespace std;
struct sosanh{
	int so;
	int gttd;
};
bool cmp (sosanh a, sosanh b)
{
	return a.gttd<b.gttd;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		sosanh a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].so;
			a[i].gttd = abs(a[i].so-x);
		}
		stable_sort(a, a+n, cmp);
		for(int i=0;i<n;i++) cout<<a[i].so<<" ";
		cout<<endl;
	}
		
		
}
