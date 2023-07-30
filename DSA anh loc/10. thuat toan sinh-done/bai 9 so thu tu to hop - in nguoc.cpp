#include <bits/stdc++.h>
using namespace std;
int n, k, a[20];
vector<int> b;
bool final=false;
vector<vector<int>> v;
int check(vector<int> x, vector<int> y)
{
	for(int i=0;i<x.size();i++) 
		if(x[i]!=y[i]) return 0;
	return 1;
}
void sinh()
{
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) final=true;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) 
			a[j]=a[j-1]+1;
	}
}
int main()
{
	cin>>n>>k;
	
	for(int i=1;i<=k;i++) a[i]=i;
	while(!final){
		vector<int> tmp;
		for(int i=1;i<=k;i++) tmp.push_back(a[i]);
		v.push_back(tmp);
		sinh();
	}
	
	for(int i=1;i<=k;i++){
		int x; cin>>x;
		b.push_back(x);
	}
	int dem=0;
	for(int i=v.size()-1;i>=0;i--){
		dem++;
		if(check(b, v[i])){
			cout<<dem;
			break;
		}
	}
}
