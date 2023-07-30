#include <bits/stdc++.h>
using namespace std;
char a[30];
int n;
bool ok;

int check()
{
	for(int i=1;i<=n-1;i++){
		if(a[i]=='H'&&a[i+1]=='H') return 0;
	}
	return 1;
}

void result()
{
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}

void sinh(){
	int j=n;
	while(j>0 && a[j]=='H'){
		a[j]='A';
		j--;
	}
	if(j>0) a[j]='H';
	else ok=false;
	if(a[1]=='H'&&a[n]=='A'&&check()) result();
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=true;
		for(int i=1; i<=n; i++) a[i]='A';
		while(ok){
			sinh();
		}
	}
	
}
