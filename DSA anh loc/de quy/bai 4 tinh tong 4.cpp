#include <bits/stdc++.h>
using namespace std;
int s4(int n)
	{
		if (n==0) return n;
		else return pow(-1, n)*n+s4(n-1);
	}
int main()
{
	int n;
	cin>>n;
	cout<<s4(n);
}
