#include <bits/stdc++.h>
using namespace std;
int a[103], n, dem=0;
bool ok=true;
void init(){
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=0;
}
void result(){
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void next(){
	int i=n;
	while(i>0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else ok=false;
}
bool check(){
	for(int i=1;i<=n;i++)
		if(a[i]!=a[n-i+1]) return false;
	return true;
}
int main()
{
	init();
	while(ok){
		if(check()) result();
		next();	
	}
	
}
