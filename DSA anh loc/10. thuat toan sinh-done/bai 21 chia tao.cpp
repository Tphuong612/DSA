#include <bits/stdc++.h>
using namespace std;
int n, x[30];
bool final=false;
void sinh()
{
	int i=n;
	while(i>=1&&x[i]==1){
		x[i]=0;
		i--;
	}
	if(i==0) final=true;
	else x[i]=1;
}
int main()
{
	cin>>n;
	long long a[30];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) x[i]=0;
	long long ans=999999999999;
	while(!final){
		long long s1=0, s2=0;
		for(int i=1;i<=n;i++){
			if(x[i]==1) s1+=a[i];
			else s2+=a[i];
		}
		ans=min(ans, abs(s1-s2));
//		cout<<ans<<" "<<s1<<" "<<s2<<endl;
		sinh();	
	}
	cout<<ans;
}
