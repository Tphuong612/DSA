#include <bits/stdc++.h>
using namespace std;
int n, a[12], b[12], dem;
bool chuaxet[12];
void check()
{
	dem++;
	for(int i=1;i<=n;i++)
		if(a[i]!=b[i]) return ;
	cout<<dem;
}
void Try(int i)
{
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			b[i]=j;
			chuaxet[j]=false;
			if(i==n) check();
			else Try(i+1);
			chuaxet[j]=true;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=0;i<=n;i++) chuaxet[i]=true;
		dem=0;
		Try(1);
		cout<<endl;
	}
}
