#include <bits/stdc++.h>
using namespace std;
int main()
{
//	int t;
//	cin>>t;
//	while(t--)
//		{
	string str;
	cin>>str;
	int x=str.length();
	sort(str.begin(), str.end());
//	cout<<str<<endl;
	long long dem=0;
	for(int i=0;i<x;i++)
		{
			dem+=upper_bound(str.begin()+i, str.end(), str[i])-lower_bound(str.begin()+i, str.end(), str[i]);
		}
	cout<<dem<<endl;
//		}
}
