#include <bits/stdc++.h>
using namespace std;
int n, k, a[12], b[12], dem;
void check()
{
	dem++;
	for(int i=1;i<=k;i++)
		if(a[i]!=b[i]) return ;
	cout<<dem;
}
void Try(int i)
{
	for(int j=b[i-1]+1;j<=n-k+i;j++){
		b[i]=j;
		if(i==k) check();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		dem=0;
		Try(1);
		cout<<endl;
	}
}
