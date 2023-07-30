#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i=9;
		int dem=0;
		while(n!=0){
			dem+=n/a[i];
			n=n%a[i];
			i--;
		}
		cout<<dem<<endl;
	}
	
}
