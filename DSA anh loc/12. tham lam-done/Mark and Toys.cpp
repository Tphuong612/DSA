#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, spend;
	cin>>n>>spend;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	int dem=0;
	long long money=0;
	for(int i=0;i<n;i++){
		if(money+a[i]<=spend){
			dem++;
			money+=a[i];
		}
	}
	cout<<dem;
}
