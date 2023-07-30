#include <bits/stdc++.h>
using namespace std;
char a[30];
int n;
void result()
{
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
}
int check()
{
	for(int i=0;i<n-1;i++){
		if(a[i]=='H'&&a[i+1]=='H') return 0;
	}
	return 1;
}
void solve()
{
	int dem=0;
	for(int i=0;i<n;i++) 
		if(a[i]==1) dem++;
	if(a[0]=='H'&&a[n-1]=='A'&&check()) result();
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		if(j==0) a[i]='A';
		else a[i]='H';
		
		if(i==n-1) solve();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(0);
		cout<<endl;
	}
	
}
