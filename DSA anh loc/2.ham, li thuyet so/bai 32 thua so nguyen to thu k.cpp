#include <bits/stdc++.h>
using namespace std;
long long solve(long long n, long long k)// tim thua so nguyen to thu k
{
	if(n==1) return -1;
	vector <int> v;
	for(int i=2;i<=sqrt(n);i++)
		{
			while(n%i==0){
				v.push_back(i);
				n/=i;
			}
		}
	if(n!=1) v.push_back(n);
	
	if(k>v.size()) return -1;
	else return v[k-1];
}
int main()
{
	long long n,k;
	cin>>n>>k;
	cout<<solve(n,k);
}
