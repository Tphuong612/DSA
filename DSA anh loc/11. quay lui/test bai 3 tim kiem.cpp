#include <bits/stdc++.h>
using namespace std;
int check;
void test(long long a[], long long n, long long s, long long k){
	int t;
	long long sum=0;
	for(int i=s-1;i>=0;i--){
		if(sum<=k) {
		sum+=a[i];
		cout<<sum<<" ";
		}
		else{
			t=i;
			break;
		}
	}
	cout<<endl;
	cout<<t<<endl;

}
int main()
{
	long long t;
	cin>>t;
	while(t--){
		long long n, s, k;
		cin>>n>>s>>k;//n ptu mang, vi tri thu s, tong max=k;
		long long a[n];
		for(long long i=0;i<n;i++) cin>>a[i];
		test(a, n, s, k);
	}
}
