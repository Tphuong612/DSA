#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	map<int, int> m;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
		}
	for(int i=0;i<n;i++)
		{
			if (m[a[i]]!=0){
				cout<<a[i]<<" ";
				m[a[i]]=0;
			}
		}
}
