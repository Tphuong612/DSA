#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n)
{
	for(int i=0;i<n-1;i++)
		if(a[i+1]<a[i]) return 0;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++) 
			if(a[j]>a[j+1]) swap(a[j], a[j+1]);
	
		cout<<"Buoc "<<i+1<<": ";
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		if(check(a,n)) break;
		
	}
	
}
