#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(long long &x: a) cin>>x;
	sort(a, a+n);
	int cnt=0;
	long long time_wait=0;
	for(int i=0;i<n;i++){
		if(a[i]>=time_wait){
			cnt++;
			time_wait+=a[i];
		}
	}
	cout<<cnt;
}
