#include <bits/stdc++.h>
using namespace std;
int a[30];
int n,k;
void result()
{
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
}
void check()
{
	int dem=0;
	for(int i=0;i<n;i++) 
		if(a[i]==1) dem++;
	if(dem==k) result();
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-1) check();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(0);
		cout<<endl;
	}
	
}
