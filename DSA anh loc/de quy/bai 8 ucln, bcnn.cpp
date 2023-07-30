#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b)
	{
		if(b==0) return a; // tuc la so du r=0(chia het)
		else return ucln(b, a%b);
	}
int main()
{
	long long a,b;
	cin>>a>>b;
	long long tb=a/ucln(a,b);
	long long bcnn=tb*b;
	cout<<ucln(a,b)<<" "<<bcnn;
}
