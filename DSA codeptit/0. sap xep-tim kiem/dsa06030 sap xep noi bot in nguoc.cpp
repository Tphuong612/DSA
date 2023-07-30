#include <bits/stdc++.h>
using namespace std;
int check(vector <int> a)
{
	for(int i=0;i<a.size()-1;i++)
		if(a[i+1]<a[i]) return 0;
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>> v;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++) 
				if(a[j]>a[j+1]) swap(a[j], a[j+1]);
			
			v.push_back(a);	
			if(check(a)) break;
		}
		for(int i=v.size()-1;i>=0;i--)
			{
				cout<<"Buoc "<<i+1<<": ";
				for(int j: v[i]) cout<<j<<" ";
				cout<<endl;
			}
	}
}
			

