#include <bits/stdc++.h>
using namespace std;
int S2(int n)
	{
		if(n==0) return n;
		else return n*n+S2(n-1);
	}
int main()
{
	long long n;
	cin>>n;
	cout<<S2(n);
}
