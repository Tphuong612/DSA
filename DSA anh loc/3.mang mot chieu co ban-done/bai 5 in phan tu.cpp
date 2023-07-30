#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int dem=0;
	for(int i=0;i<n;i++)// hoac chi duyet cac phan tu mang chi so chan i=0, i=i+2;
		{
			if(a[i]%2==0&&i%2==0){
				dem++;
				cout<<a[i]<<" ";
			}
		}
	if(dem==0) cout<<"NONE";
}
