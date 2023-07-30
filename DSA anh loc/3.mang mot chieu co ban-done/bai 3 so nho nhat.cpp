#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	map <int, int> m;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
		}
	for(auto x: m){
		cout<<x.second;
		break;
	}
}
