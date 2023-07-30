#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int> l(n, 1);
	//L[i]: do dai day con ket thuc o chi so i
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){// duyet ve dang truoc
			if(a[i]>a[j]) l[i]=max(l[i], l[j]+1);
		}
	}
	cout<<*max_element(l.begin(), l.end());
}
