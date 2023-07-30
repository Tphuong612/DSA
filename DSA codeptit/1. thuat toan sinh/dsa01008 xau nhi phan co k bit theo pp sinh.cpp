#include <bits/stdc++.h>
using namespace std;
int a[30];
int n,k;
bool ok;
void result()
{
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
void sinh(){
	int j=n;
	while(j>0&&a[j]==1){
		a[j]=0;
		j--;
	}
	if(j>0) a[j]=1;
	else ok=false;
	int dem=0;
	for(int i=1;i<=n;i++) 
		if(a[i]==1) dem++;
	if(dem==k) result();
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ok=true;
		for(int i=1; i<=n; i++) a[i]=0;
		while(ok){
			sinh();
		}
	}
}
