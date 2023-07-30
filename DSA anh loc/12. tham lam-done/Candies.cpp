#include <bits/stdc++.h>// duyet 2 dau
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int res[n];
	res[0]=1;
	for(int i=1;i<n;i++){// duyet theo chieu xuoi
		if(a[i]>a[i-1]) res[i]=res[i-1]+1;
		else res[i]=1;
	}
	for(int i=n-2;i>=0;i--){// duyet theo chieu nguoc
		int tmp=res[i];
		if(a[i]>a[i+1]) tmp=res[i+1]+1;
		res[i]=max(res[i], tmp);
	}
	long long s=0;
	for(int i=0;i<n;i++) s+=res[i];
	cout<<s;
}
