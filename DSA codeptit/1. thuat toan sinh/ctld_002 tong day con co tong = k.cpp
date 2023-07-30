#include <bits/stdc++.h>
using namespace std;
int n,k,dem=0;

vector <int>  a, b;// mang a chua cac gia tri nhap tu ban phim, con mang b chua cac gia tri nhi phan 0 vs 1
void solve(){
	long long sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i]*b[i];
	if(sum==k){
		dem++;
		for(int i=0;i<n;i++)
			if(b[i]) cout<<a[i]<<" ";
		cout<<endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		b[i]=j;
		if(i==n-1) solve();
		else Try(i+1);
	}
}
int main()
{
	cin>>n>>k;
	a.resize(n);
	b.resize(n);
	for(auto &x: a) cin>>x;
	Try(0);
	cout<<dem;
}
