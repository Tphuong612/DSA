#include <bits/stdc++.h>
using namespace std;
int n,a[30];
bool chuaxet[30];
void result()
{
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i)
{
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			a[i]=j;
			chuaxet[j]=false;
			if(i==n) result();
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
		for(int i=1;i<=n;i++) chuaxet[i]=true;
		Try(1);
		cout<<endl;
	}
}
