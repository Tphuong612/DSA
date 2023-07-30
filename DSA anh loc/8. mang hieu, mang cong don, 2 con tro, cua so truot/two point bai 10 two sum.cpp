#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	bool check=false;
	for(int i=0;i<n;i++){
		if(binary_search(a+i+1, a+n, k-a[i])){
			check=true;
			cout<<"YES";
			break;
		}
	}
	if(!check) cout<<"NO";
}
