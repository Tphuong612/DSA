#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+1], f[n+1]; // f[i]= tong cua day con ket thuc boi chi so i

	for(int i=1;i<=n;i++) cin>>a[i];
	f[0]=0;
	for(int i=1;i<=n;i++) f[i]=a[i];
	for(int i=1;i<=n;i++){
		for(int j=i-1;j>=1;j--){
			if(a[i]>a[j]) f[i]=max(f[i], f[j]+a[i]);
		}
	}
	cout<<*max_element(f+1, f+n+1);
}
