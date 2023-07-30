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
	for(int x:a)
		{
			if (m[x]!=0){
				cout<<x<<" "<<m[x]<<endl;
				m[x]=0;
			}
		}
}
