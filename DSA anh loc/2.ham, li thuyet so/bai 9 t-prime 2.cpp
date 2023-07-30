#include <bits/stdc++.h> // so co 3 uoc la so chinh phuong cua snt
using namespace std;
int check(long long n)//check nt
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0) return 0;
			}
		return 1;
	}
int main()
	{
		long long n;
		cin>>n;
		long long dem=0;
		for(int i=2;i<=sqrt(n);i++)
			if(check(i)==1) dem++;	
		cout<<dem;
	}
