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
		int dem=0;
		for(int i=1; i<=n; i++){
			int x, y;
			cin>>x>>y;
			if(y<x) dem++;
		}
		cout<<dem<<endl;
	}
}
