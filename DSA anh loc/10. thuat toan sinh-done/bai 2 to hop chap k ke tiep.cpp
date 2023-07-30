#include <bits/stdc++.h>
using namespace std;
int n, k, a[1001];
bool final=false;
void sinh()
{
	int i=k;
	while(i>=0&&a[i]==n-k+i) i--;
	if(i==0) final=true;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++)
			a[j]=a[j-1]+1;		
	}
	if(!final){
		for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	}
	else{
		for(int i=1;i<=k;i++) cout<<i<<" ";
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++) cin>>a[i];
	sinh();
	
}
