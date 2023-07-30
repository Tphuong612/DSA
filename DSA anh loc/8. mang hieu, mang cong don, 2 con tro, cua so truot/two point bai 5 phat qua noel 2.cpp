#include <bits/stdc++.h>// phat qua noel = day con dai/ngan nhat co tong <=s;
using namespace std;
int main()
{
	long long n,s;
	cin>>n>>s;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	long long l=0,r, ans=9999999999;//ans co tac dung luu ki luc ve do dai
	long long sum=0;
	bool check=false;
	for(r=0;r<n;r++){
		sum+=a[r];
		while(sum>=s){
			check=true;
			ans=min(ans, r-l+1);
			sum-=a[l];
			l++;
		}
//		cout<<r<<" "<<l<<endl;	
	}
	
	if(check) cout<<ans;
	else cout<<"-1";
}
