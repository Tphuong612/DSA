#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k+5];
		for(int j=1;j<=k;j++) cin>>a[j];
		
		int check=0;
		int i=k;
		while(i>0&&a[i]==n-k+i) i--;//tim vi tri a[i]!=x-k+1;
		if(i>0){
			a[i]=a[i]+1;
			for(int m=i+1;m<=k;m++) a[m]=a[i]+m-i;
		}
		else check=1;
		
		if(check){
			for(int r=1;r<=k;r++) cout<<r<<" ";
			cout<<endl;
		}
		else{
			for(int h=1;h<=k;h++) cout<<a[h]<<" ";
			cout<<endl;
		}
	}
}
