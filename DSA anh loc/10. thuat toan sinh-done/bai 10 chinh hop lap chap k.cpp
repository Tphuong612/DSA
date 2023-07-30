#include <bits/stdc++.h>// khoi tao la to hop + sinh la nhi phan
using namespace std;
int n, k, a[10];
bool final=false;
void sinh()
{
	int i=k;
	while(i>=1&&a[i]==n){
		a[i]=1;
		i--;
	}
	if(i==0) final=true;
	else{
		a[i]++;
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++) a[i]=1;
	while(!final){
		for(int i=1;i<=k;i++) cout<<a[i];
		cout<<endl;
		sinh();
	}
}
