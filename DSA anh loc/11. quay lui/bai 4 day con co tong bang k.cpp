#include <bits/stdc++.h>
using namespace std;
int n,k, ok=0;
int a[20], x[20];
int check()
{
	int sum=0;
	for(int i=1;i<=n;i++)
		sum+=a[i]*x[i];
	if(sum==k){
		ok=1;
		return 1;
	}
	else return 0;
}
void in()
{
	int sum=k;
	cout<<"[";
	for(int i=1;i<=n;i++){
		if(a[i]*x[i]!=0){
			sum-=a[i];
			cout<<a[i];
			if(sum!=0) cout<<" ";
			else cout<<"]";
		}
	}
	
	cout<<endl;
}
void Try(int i)
{
	for(int j=1;j>=0;j--){
		x[i]=j;
		if(i==n){
			if(check()) in();
		}
		else Try(i+1);
	}
	
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1, a+n+1);
	Try(1);
	if(ok==0) cout<<"-1";
}
