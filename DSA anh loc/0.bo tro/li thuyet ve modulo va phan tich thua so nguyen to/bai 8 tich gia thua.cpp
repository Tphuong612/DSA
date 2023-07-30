#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long m = 1000000007;

	long long tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
		tich%=m;
		cout<<tich<<endl;
	}
}
