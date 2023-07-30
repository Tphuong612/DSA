#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1001];
set <int> s;
int dem;// dung de dem phan tu khac trong to hop moi
void sinh()
{
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i>=1){
		a[i]++;
		for(int j=i+1;j<=k;j++)
			a[j]=a[j-1]+1;
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	sinh();
	for(int i=1;i<=k;i++){
		s.insert(a[i]);
	}
	dem=s.size()-k;
	if(dem==0) cout<<k;
	else cout<<dem;
	
}