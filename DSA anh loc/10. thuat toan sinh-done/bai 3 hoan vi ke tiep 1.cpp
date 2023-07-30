#include <bits/stdc++.h>
using namespace std;
int n, a[1001];

int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	if(!next_permutation(a, a+n)){
		for(int i=0;i<n;i++) cout<<i+1<<" ";
	}
	else{
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
	}
	
}
