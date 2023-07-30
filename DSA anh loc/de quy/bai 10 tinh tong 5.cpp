#include <bits/stdc++.h>
using namespace std;
double s5(int n)
	{
		if(n==0) return n;
		else return 1.0/n+s5(n-1);
	}
int main()
{
	int n;
	cin>>n;
	cout<<fixed<<setprecision(3)<<s5(n);
}
