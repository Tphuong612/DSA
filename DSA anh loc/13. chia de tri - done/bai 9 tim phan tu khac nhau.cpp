#include <bits/stdc++.h>
using namespace std;
int search(int a[], int b[], int n){
	int i=0, j=0;
	while(i<n&&j<n-1){
		if(a[i]==b[j]){
			i++;
			j++;
		}
		else return a[i];
	}
	return a[n-1];
	
}
int main()
{
	
		int n;
		cin>>n;
		int a[n], b[n-1];
		for(int &i: a) cin>>i;
		for(int &i: b) cin>>i;
		cout<<search(a, b, n);
		cout<<endl;
}
