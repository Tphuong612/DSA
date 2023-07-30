#include <bits/stdc++.h>
using namespace std;
char a[30];
int n;
void result()
{
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		a[i]=j+'A';
		if(i==n-1) result();
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
