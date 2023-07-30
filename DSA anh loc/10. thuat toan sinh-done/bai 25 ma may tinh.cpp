#include <bits/stdc++.h>
using namespace std;
int n, k;
int b[30];
bool final=false;
string s="", bd="ABCDEFGH";

void sinh(){
	int i=n;
	while(i>=1&&b[i]==n){
		b[i]=1;
		i--;
	}
	if(i==0) final=true;
	else b[i]++;
}

void ma(){
	do{
		while(!final){
			cout<<s;
			for(int i=1; i<=n;i++) cout<<b[i];
			cout<<endl;
			sinh();
		}
		final=false;
	}
	while(next_permutation(s.begin(), s.end()));
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) s+=bd[i];
	for(int i=1;i<=n;i++) b[i]=1;
//	cout<<s;
	ma();
}
