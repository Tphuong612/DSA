#include <bits/stdc++.h>
using namespace std;
int giaithua(int n)
	{
		if(n==0) return 1;
		else return n*giaithua(n-1);
	}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<giaithua(n)/(giaithua(k)*giaithua(n-k));
}
