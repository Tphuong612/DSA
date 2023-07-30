#include <bits/stdc++.h>
using namespace std;
long long v[1000005];
int main()
{
	int n, m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v, v+n);
	long long l=0, r=v[n-1]-v[0];
	long long max_distance=0;
	while(l<=r){
		long long mid=(l+r)/2;
		long long cnt=1;
		long long start=v[0];// vi tri bat dau luon la phan tu nho nhat
		for(int i=1;i<n;i++){
			if(v[i]-start>=mid){
				cnt++;
				start=v[i];
			}
		}
		if(cnt>=m){
			max_distance=mid;
			l=mid+1;
		}
		else r=mid-1;
		
	}
	cout<<max_distance<<endl;
}
