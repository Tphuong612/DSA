#include <bits/stdc++.h>
using namespace std;
string s;
char x[100];

vector <string> v;
void result(int n)
{
	s="";
	for(int i=1;i<=n;i++){
		s+=x[i];
	}
	v.push_back(s);
}
void Try(int i, int n)
{
	for(int j=0;j<=1;j++ ){
		if(j==0) x[i]='0';
		else x[i]='8';
		if(i==n){
			result(n);
		}
		else Try(i+1, n);
	}
}
void tao()
{
	for(int i=1;i<=19;i++) Try(1, i);
}
int main()
{
	tao();
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
//		for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
		for(int i=0;i<v.size();i++){
			long long p=stoll(v[i]);
			if(p!=0&&p%k==0){
				cout<<v[i]<<endl;
				break;
			}
		}	
	}
}