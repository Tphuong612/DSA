#include <bits/stdc++.h>
using namespace std;
int a[20], n, dem=0;
void sinh(){
	do{
		dem++;
		cout<<dem<<": ";
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	while(next_permutation(a+1, a+n+1));
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=i;
	sinh();
}
