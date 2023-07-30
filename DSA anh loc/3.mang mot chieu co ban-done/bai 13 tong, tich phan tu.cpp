#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+5];
	long long tong=0, tich=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		tong+= a[i];
		tong%=1000000007;
		tich*= a[i];
		tich%=1000000007;
	}
	cout<<tong<<endl<<tich;
}
