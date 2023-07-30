#include <bits/stdc++.h>
using namespace std;
char a[30], b[30];
int x[30];
int n, k;
void in()
{
	for(int i=1;i<=k;i++) cout<<b[i];
	cout<<endl;
}
void Try(int i)
{
	for(int j=x[i-1];j<=n;j++){
		b[i]=a[j];
		x[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a, a+n);
	x[0]=1;
	Try(1);
}
