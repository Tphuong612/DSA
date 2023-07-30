#include <bits/stdc++.h>
using namespace std;
int n, a[30];
void print(int a[], int n)
{
	cout<<"[";
	for(int i=1;i<n;i++) cout<<a[i]<<" ";
	cout<<a[n]<<"]";
	cout<<" ";
}
void solve(int a[], int n)
{
	if(n==1) return ;
	else{
		int b[30];
		for(int i=1;i<=n-1;i++) b[i]=a[i]+a[i+1];
		solve(b, n-1);// thuc hien xong de qui cua cau lenh nay moi lm de qui cua cua 18
		print(b, n-1);// in tu xau n-1 tro ve trc
	}	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		solve(a, n);
		print(a, n);
		cout<<endl;
	}
}
