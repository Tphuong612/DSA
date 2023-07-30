#include <bits/stdc++.h>
using namespace std;
int n, k, a[20];
bool final=false;
void in()
{
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<endl;
}
void sinh()//to hop
{
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) final=true;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++) a[i]=i;
	while(!final){
		in();
		sinh();
	}
}
