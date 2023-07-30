#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5], b[n+5];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		for(int i=1; i<=n; i++) b[i]=i;
		int dem=0;
		do{
			dem++;
			int check=1;
			for(int i=1; i<=n; i++){
				if(a[i]!=b[i]){
					check=0;
					break;
				}
			}
			if(check==1){
				cout<<dem<<endl;
				break;
			}
		}
		while(next_permutation(b+1, b+1+n));
	}
}
