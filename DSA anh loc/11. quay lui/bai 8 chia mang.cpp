#include <bits/stdc++.h>
using namespace std;
int n, k, tong, a[50], dem=0, ok=0;// sum la tong dung de check
bool visited[30];
void Try(int pos, int sum){
	
	for(int i=pos+1;i<=n;i++){
		if(!visited[i]&&sum+a[i]<=tong){
			visited[i]=true;
			if(sum+a[i]==tong){
				++dem;
				Try(0, 0);
			}
			else Try(i, sum+a[i]);		
			visited[i]=false;
		}
		if(dem==k){
			ok=1;
			return;
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		tong+=a[i];
	}
	sort(a+1, a+n+1);
	memset(visited, false, 30);
	if(tong%k==0){
		tong=tong/k;
		Try(0, 0);
//		cout<<dem<<" ";
		if(ok==1) cout<<"1";
		else cout<<"0";
	}
	else cout<<"0";	
}
