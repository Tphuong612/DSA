#include <bits/stdc++.h>
using namespace std;
int n, k,tong=0, a[50], dem=0;
int ok=0;
bool visited[30];
void Try(int pos, int sum){
	 if(dem==k){
			  ok=1;
				return;
			 }
	if(ok==1) return;
 for(int i=pos+1;i<=n;i++){
	 if(!visited[i]&&sum+a[i]<=tong){
		 visited[i]=true;
		 if(sum+a[i]==tong){
//		 	cout<<sum<<" "<<tong<<endl;
//			for(int i=1;i<=n;i++) if(visited[i]) cout<<a[i]<<" ";
//			cout<<endl; 
			 ++dem;
			
			 Try(0, 0);
//			 dem--;
		 
		 }
		 else Try(i, sum+a[i]); 
		 visited[i]=false;
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
 memset(visited, false, 30);
 if(tong%k==0){
 tong=tong/k;
 
 Try(0, 0);
 cout<<dem<<" ";
 if(ok==1) cout<<"1";
 else cout<<"0";
 }
 else cout<<"0";
}