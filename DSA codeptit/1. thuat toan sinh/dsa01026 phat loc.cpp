#include <bits/stdc++.h>
using namespace std;
char a[30];
int n;
void result()
{
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
}
int check8()
{
	for(int i=0;i<n-1;i++){
		if(a[i]=='8'&&a[i+1]=='8') return 0;
	}
	return 1;
}
int check6()
{
	for(int i=0;i<n-1;i++){
		if(a[i]=='6'&&a[i+1]=='6'&&a[i+2]=='6'&&a[i+3]=='6') return 0;
	}
	return 1;
}
void solve()
{
	if(a[0]=='8'&&a[n-1]=='6'&&check6()&&check8()) result();
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		if(j==0) a[i]='6';
		else a[i]='8';
		if(i==n-1) solve();
		else Try(i+1);
	}
}
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
		cin>>n;
		Try(0);
		cout<<endl;
//	}
}
