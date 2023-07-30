#include <bits/stdc++.h>
using namespace std;
long long ans=0;
int b[5];
bool final=false;
void sinh()
{
	int i=3;
	while(i>=1&&b[i]==1){
		b[i]=0;
		i--;
	}
	if(i==0) final=true;
	else{
		b[i]=1;
	}
}
int main()
{
	int a[10];
	for(int i=1;i<=4;i++){
		cin>>a[i];
	}
	for(int i=1;i<=3;i++) b[i]=0;
	
	long long dem=0, ans=-99999999;
	while(!final){
		long long s=a[1];
		for(int i=1;i<=3;i++){
			if(b[i]==1) s=s+a[i+1];
			else s=s-a[i+1];
		}
	
		ans=max(s, ans);
		sinh();
	}
	cout<<ans;
}

