#include <bits/stdc++.h>
using namespace std;
int a[100], n;
bool ok=true;
void result()
{
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void next()
{
	int j=n-1;
	while(j>0&&a[j]>a[j+1]) j--;
	if(j>0){
		int k=n;
		while(a[k]<a[j]) k--;
		swap(a[k], a[j]);
		int l=j+1, r=n;
		while(l<=r){
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
	else ok=false;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1, a+n+1);
	while(ok){
		result();
		next();
	}
	
}
