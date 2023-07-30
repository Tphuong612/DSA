#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[13];
	for(int i=0;i<12;i++) cin>>a[i];
	sort(a, a+12);
	long long sum[4];
	sum[0]=a[0]+a[1]+a[11];
	sum[1]=a[2]+a[3]+a[10];
	sum[2]=a[4]+a[5]+a[9];
	sum[3]=a[6]+a[7]+a[8];
	sort(sum, sum+4);
	cout<<sum[3]-sum[0];
}
