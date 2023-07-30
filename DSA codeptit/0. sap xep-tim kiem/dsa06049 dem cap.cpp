#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n);
		long long dem=0;
		for(int i=0;i<n;i++)
			dem+=upper_bound(a + i + 1, a + n, a[i] + k - 1) - (a + i + 1);
		cout<<dem<<endl;
	}
}
/* y tuong: a[j]-a[i]<k thi tim den vi tri a[j]-a[i]>k-1 => a[j]>a[i]+k-1 thi dung lai, 
tra ve vi tri dau tien tm, cac so lien trc vi tri do deu thoa man (tuc la da co (vi tri-1) cap thoa man) */
