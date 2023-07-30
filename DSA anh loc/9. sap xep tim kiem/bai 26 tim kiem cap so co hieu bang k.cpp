#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	int check=0;
	for(int j=0;j<n-1;j++){
		if(binary_search(a+j+1, a+n, x+a[j])){
			check=1;
			cout<<"1";
			break;
		}
	}
	if(check==0) cout<<"-1";
}
