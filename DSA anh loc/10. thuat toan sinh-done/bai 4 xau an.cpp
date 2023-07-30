#include <bits/stdc++.h>
using namespace std;
char a[15];
int n;
bool final=false;
void in()
{
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
void sinh()
{
	int i=n;
	while(i>=1&&a[i]=='A'){
		a[i]='B';
		i--;
	}
	if(i==0) final=true;
	else{
		a[i]='A';
	}
	
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) a[i]='B';
	while(!final){
		in();
		sinh();
	}
}
