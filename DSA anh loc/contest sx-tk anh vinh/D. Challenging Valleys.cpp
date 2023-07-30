//#include <bits/stdc++.h>
//using namespace std;
//int check(long long a[], int n)
//{
//	long long i=0;
//	while(a[i]>=a[i+1]&&i<n-1) i++;
//	cout<<i<<endl;
//	for(long long j=i;j<n-1;j++){
//		if(a[j]>a[j+1]){
//			return 0;
//		} 
//	}
//	return 1;
//}
//int main()
//{
//	long long t;
//	cin>>t;
//	while(t--){
//		long long n;
//		cin>>n;
//		long long a[n];
//		for(int i=0;i<n;i++) cin>>a[i];
//		if(check(a, n)) cout<<"YES"<<endl;
//		else cout<<"NO"<<endl;
//	}
//}
#include <bits/stdc++.h>
using namespace std;
void check(long long a[], int n)
{
	long long i=0;
	while(a[i]>=a[i+1]&&i<n-1) i++;
//	cout<<i<<endl;
	for(long long j=i;j<n-1;j++){
		if(a[j]>a[j+1]){
			cout<<"NO"<<endl;
			return;
		} 
	}
	cout<<"YES"<<endl;
}
int main()
{
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(long long &x: a) cin>>x;
		check(a, n);
	}
	
}