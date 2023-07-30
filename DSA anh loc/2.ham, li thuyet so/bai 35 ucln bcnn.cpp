#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
	long long ucln=__gcd(a,b);
	long long bcnn=(a/__gcd(a,b))*b;
	cout<<ucln<<" "<<bcnn;
}
