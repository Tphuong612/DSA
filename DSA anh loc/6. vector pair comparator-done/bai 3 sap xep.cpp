#include <bits/stdc++.h>
using namespace std;
bool cmp (int a, int b)
{
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(), v.end());
	for(auto it=v.begin(); it!=v.end(); it++)
		cout<<*it<<" ";
	cout<<endl;
	sort(v.begin(), v.end(),cmp);
	for(auto it=v.begin(); it!=v.end(); it++)
		cout<<*it<<" ";
}
