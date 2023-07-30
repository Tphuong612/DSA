#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	map <long long, long long> m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	long long max=-1, gtr;
	for(auto x: m){
		if(max<x.second){
			max=x.second;
			gtr=x.first;
		}
	}
	cout<<gtr<<" "<<max;
}
