#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map <int, int> m;
		int a[n];
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
				m[a[i]]++;
			}
		int max=0;
		int gtr;
		for(auto i:m)
			{
				if(i.second>max){
					max=i.second;
					gtr=i.first;
				}	
			}
		if(max>n/2) cout<<gtr<<endl;
		else cout<<"NO"<<endl;
	}
}
