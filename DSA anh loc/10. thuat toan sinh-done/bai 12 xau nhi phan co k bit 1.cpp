#include <bits/stdc++.h>
using namespace std;
int n, k, a[20];
bool final=false;
int check()
{
	int dem=0;
	for(int i=1;i<=n;i++) 
		if(a[i]==1) dem++;
	if(dem==k) return 1;
	else return 0;
}
int lientiep()
{
	int sl=0;
	for(int i=1;i<=n-k+1;i++){
		int dem=0;
		for(int j=i; j<=i+k-1;j++)
			if(a[j]==1) dem++;
		if(dem==k) sl++;
	}
	if(sl==1) return 1;
	return 0;
}
void sinh()
{
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) final=true;
	else a[i]=1;
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) a[i]=0;
	while(!final){
		if(check()){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
		}
		sinh();
	}
	cout<<endl;
	final=false;
	for(int i=1;i<=n;i++) a[i]=0;
	while(!final){
		if(lientiep()){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
		}
		sinh();
	}
}
