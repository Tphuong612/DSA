#include <bits/stdc++.h>
using namespace std;
int nt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
		return 1;
	}
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	double s=0, dem=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(nt(a[i])){
			dem++;
			s+=a[i];
		}
		
	}
	cout<<fixed<<setprecision(3)<<(double)s/dem;	
}
