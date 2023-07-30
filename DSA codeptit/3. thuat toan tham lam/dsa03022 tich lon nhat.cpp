#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a, a+n);
	vector<long long> max;
	max.push_back(a[0]*a[1]);// 2 so am
	max.push_back(a[n-1]*a[n-2]); //2 so duong
	max.push_back(a[0]*a[1]*a[2]);
	max.push_back(a[n-1]*a[n-2]*a[n-3]);// 3 so duong
	max.push_back(a[n-1]*a[1]*a[0]);//2 am, 1 duong
	sort(max.begin(), max.end());
	cout<<*max.rbegin();
}
