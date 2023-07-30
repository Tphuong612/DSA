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
		int check=0;
		for(int i=0;i<n;i++)
			{
				if(m[a[i]]>1){
					check=1;
					cout<<a[i]<<endl;
					break;
				}
			}
		if(check==0) cout<<"NO\n";
	}
}
