#include <bits/stdc++.h>
using namespace std;
int check(long long a[], int n)
{
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-1-i]) return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	long long a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(check(a,n)) cout<<"YES";
	else cout<<"NO";
	
}
