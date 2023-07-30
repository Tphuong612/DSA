#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long f[n+1]={0};
	f[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			if(i>=j) f[i]+=f[i-j];
		}
	}
	cout<<f[n];
}
