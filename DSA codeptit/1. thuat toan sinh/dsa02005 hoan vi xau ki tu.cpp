#include <bits/stdc++.h>
using namespace std;
string s;
char a[30];
int n;
bool chuaxet[200];
void result()
{
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i)
{
	for(int j=0;j<n;j++)
		if(chuaxet[j]){
			a[i]=s[j];
			chuaxet[j]=false;
			if(i==n-1) result();
			else Try(i+1);
			chuaxet[j]=true;
		}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		n=s.length();
		for(int i=0;i<n;i++) chuaxet[i]=true;
		Try(0);
		cout<<endl;
	}
}
