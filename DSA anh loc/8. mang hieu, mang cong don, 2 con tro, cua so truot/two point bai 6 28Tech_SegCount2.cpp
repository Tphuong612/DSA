#include <bits/stdc++.h>// dem so luong day con co tong >= s
using namespace std;
int main()
{
	long long n,s;
	cin>>n>>s;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	long long l=0,r;
	long long sum=0, dem=0;
	
//	for(r=0;r<n;r++){// dung nhung bi TLE
//		sum+=a[r];
//		long long l=0;
//		long long check=sum;
//		while(check>=s){
//			dem++;
//			check-=a[l];
//			l++;
//		}
//	}
	for(r=0;r<n;r++){
		sum+=a[r];
		while(sum>=s){
			sum-=a[l];
			l++;
		}
		dem+=l;// do l da dc tang len 1 don vi o cau lenh so 26;
	}
	cout<<dem;
}
