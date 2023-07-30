#include <bits/stdc++.h>
using namespace std;
int n,k;
int dem;
vector <int>  a, b;// mang a chua cac gia tri nhap tu ban phim, con mang b chua cac gia tri nhi phan 0 vs 1
void solve()
{
	long long sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i]*b[i];
	if(sum==k){
		dem++;
		cout<<"[";
		for(int i=0;i<=n-1;i++){
			if(b[i]){
				cout<<a[i];
				sum-=a[i];
				if(sum!=0) cout<<" ";
			}
				
		}
		cout<<"]";	
		cout<<" ";
	}
}
void Try(int i){
	for(int j=1;j>=0;j--){
		b[i]=j;
		if(i==n-1) solve();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a.resize(n);
		b.resize(n);
		for(auto &x: a) cin>>x;
		sort(a.begin(), a.end());
		dem=0;
		Try(0);
		if(dem==0) cout<<"-1";
		cout<<endl;
	}
}
