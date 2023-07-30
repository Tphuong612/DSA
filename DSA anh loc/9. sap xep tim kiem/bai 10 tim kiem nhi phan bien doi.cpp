#include <bits/stdc++.h>
using namespace std;
int first(int a[], int n, int x)
{
	int l=0, r=n-1, res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(x==a[m]){
			res=m;//cap nhap vi tri
			r=m-1;// tim them o ben trai vi tri tot hon neu co
		}
		else if (x<a[m]) r=m-1;
		else l=m+1;
	}
	return res;
}

int last(int a[], int n, int x)
{
	int l=0, r=n-1, res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(x==a[m]){
			res=m;//cap nhap vi tri
			l=m+1;// tim them o ben phai vi tri tot hon neu co
		}
		else if (x<a[m]) r=m-1;
		else l=m+1;
	}
	return res;
}

int lower(int a[], int n, int x)
{
	int l=0, r=n-1, res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]>=x){
			res=m;//cap nhap
			r=m-1;// tim them o ben trai
		}
		else l=m+1;
	}
	return res;
}
int upper(int a[], int n, int x){
	int l=0, r=n-1, res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]>x){
			res=m;//cap nhap
			r=m-1;// tim them o ben trai
		}
		else l=m+1;
	}
	return res;
}
int main()
{
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<first(a,n,x)<<endl;
	cout<<last(a,n,x)<<endl;
	cout<<lower(a,n,x)<<endl;
	cout<<upper(a,n,x)<<endl;
	if(first(a,n,x)!=-1) cout<<last(a, n, x)-first(a, n, x)+1;
	else cout<<"0";
	
}
