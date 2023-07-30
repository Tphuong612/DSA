#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t=1;
	//cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=1; i<=n; i++){
			int x, y, z, a;
			cin>>x>>y>>z;
			a=x+y+z;
			if(a>=2) dem++;
		}
		cout<<dem<<endl;
	}
}
