#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, k;
int a[30];
void result(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<endl;
}
void check(){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(a[i]==1) dem++;
	}
	if(dem==k) result();
}

void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) check();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}
}
