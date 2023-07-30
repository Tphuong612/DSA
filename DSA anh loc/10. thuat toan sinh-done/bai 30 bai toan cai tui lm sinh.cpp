#include <bits/stdc++.h>
using namespace std;
bool final=false;
int n;
int a[20], b[20], x[20];// a chua trong luong, b chua gia tri, mang x chua xau nhi phan
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
	int s;
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++) x[i]=0;
	int ans=-9999999;
	while(!final){
		int g=0, gtr=0;
		for(int i=1;i<=n;i++){
			if(x[i]==1){
				g+=a[i];
				gtr+= b[i];
			}
		}
		if(g<=s) ans=max(gtr, ans );
		sinh();
	}
	cout<<ans;
}
