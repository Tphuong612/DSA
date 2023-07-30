#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, k;
int a[100], x[100];
int b[100];
void result(){
	for(int i=1; i<=k; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for(int j=x[i-1]+1; j<=n-k+i; j++){
		x[i]=j;
		a[i]=b[j];
		if(i==k) result();
		else Try(i+1);
	}
}
int main()
{
	int m;
	cin>>m>>k;
	set <int> s;
	for(int i=1; i<=m; i++){
		int x;
		cin>>x;
		s.insert(x);
	}
	int dem=0;
	for(int i: s){
		dem++;
		b[dem]=i;
	}
	n=s.size();
	x[0]=0;
	Try(1);
}
