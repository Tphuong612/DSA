#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<vector<int>> v;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		
		for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++) 
					if(a[j]<a[i]) swap(a[i], a[j]);
				v.push_back(a);	
			}
		for(int i=v.size()-1;i>=0;i--)
			{
				cout<<"Buoc "<<i+1<<": ";
				for(int j: v[i]) cout<<j<<" ";
				cout<<endl;
			}
			
	}
}
