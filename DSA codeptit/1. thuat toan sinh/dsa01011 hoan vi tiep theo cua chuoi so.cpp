#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int q;
		cin>>q;
		string a;
		cin>>a;
		int n=a.size()-1;
		int check=0;
		int i=n-1;
		while(i>=0&&a[i]>=a[i+1]) i--;//tim vi tri sao cho so trc <= so sau;
		if(i>=0){
			int k=n;
			while(a[k]<=a[i]) k--;// tim phan tu nho nhat ben phai a[j] va lon hon a[j]
			swap(a[i], a[k]);
			int l=i+1, r=n;
			while(l<=r){
				swap(a[l], a[r]);
				l++;
				r--;
			}
		}
		else check=1;
		cout<<q<<" ";
		if(check){
			cout<<"BIGGEST";
			cout<<endl;
		}
		else{
			cout<<a;
			cout<<endl;
		}
	}
}
