#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	
	int dem=1, min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]-min>4){
			min=a[i];
			dem++;
		}
	}
	cout<<dem;
}
