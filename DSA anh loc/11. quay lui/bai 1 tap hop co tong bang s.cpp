#include <bits/stdc++.h>
using namespace std;
int n, k, s, dem=0;
int x[100];
void check()
{
	int sum=0;
	for(int i=1;i<=k;i++)
		sum+=x[i];
	if(sum==s) dem++;
}
//void in()
//{
//	for(int i=1;i<=k;i++) cout<<x[i]<<" ";
//	cout<<endl;
//}
void Try(int i)
{
	for(int j=x[i-1]+1; j<=n;j++){
		x[i]=j;
		if(i==k) check();
//		if(i==k) in();
		else Try(i+1); 
	}
}
int main()
{
	cin>>n>>k>>s;
	x[0]=0;
	Try(1);
	cout<<dem;
}
