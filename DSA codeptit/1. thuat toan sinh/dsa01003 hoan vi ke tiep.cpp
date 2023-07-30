#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int j=1;j<=n;j++) cin>>a[j];
		
		int check=0;
		int i=n-1;
		while(i>0&&a[i]>a[i+1]) i--;//tim vi tri sao cho so trc < so sau;
		if(i>0){
			int k=n;
			while(a[k]<a[i]) k--;// tim phan tu nho nhat ben phai a[j] va lon hon a[j]
			swap(a[i], a[k]);
			int l=i+1, r=n;
			while(l<=r){
				swap(a[l], a[r]);
				l++;
				r--;
			}
		}
		else check=1;
		
		if(check){
			for(int r=1;r<=n;r++) cout<<r<<" ";
			cout<<endl;
		}
		else{
			for(int h=1;h<=n;h++) cout<<a[h]<<" ";
			cout<<endl;
		}
	}
}
