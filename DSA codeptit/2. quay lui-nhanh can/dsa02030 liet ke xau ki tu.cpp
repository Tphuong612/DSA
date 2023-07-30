#include <bits/stdc++.h>
using namespace std;
int n, k, x[100];
char a[100];
void result()
{
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<endl;
}
void Try(int i)
{
	for(int j=x[i-1];j<=n;j++){
		a[i]=j+'A'-1;
		x[i]=j;
		if(i==k) result();
		else Try(i+1);
	}
}
int main()
{
	char c;
	cin>>c>>k;
	n=c-'A'+1;
	x[0]=1;
	Try(1);
	
}
