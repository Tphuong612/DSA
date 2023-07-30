#include <bits/stdc++.h>
using namespace std;
long long s3(int n)
	{
		if(n==0) return n;
		else return n*n*n+s3(n-1);
	}
int main()
{
	long long n;
	cin>>n;
	cout<<s3(n);
}
