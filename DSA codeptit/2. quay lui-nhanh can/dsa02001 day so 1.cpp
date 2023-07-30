#include <bits/stdc++.h>
using namespace std;
int n, a[30];
void solve(int a[], int n)
{
	if(n==0) return ;
	else{
		cout<<"[";
		for(int i=1;i<n;i++) cout<<a[i]<<" ";
		cout<<a[n]<<"]";
		cout<<endl;
		int b[n+1];
		for(int i=1;i<=n;i++) b[i]=a[i]+a[i+1];
		solve(b, n-1);
	}	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		solve(a, n);
		
	}
}
