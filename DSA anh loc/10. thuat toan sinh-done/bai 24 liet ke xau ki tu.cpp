#include <bits/stdc++.h>
using namespace std;
int n, k, b[100];

bool final=false;

void sinh(){
	int i=k;
	while(i>=1&&b[i]==n){
		b[i]=1;
		i--;
	}
	if(i==0) final=true;
	else{
		b[i]++;
//		for(int j=i+1;j<=k;j++) b[j]=b[j-1]+1;
	}
}
int main()
{
	char c;
	cin>>c>>k;
	n=c-'A'+1;
	for(int i=1;i<=k;i++) b[i]=1;
//	for(int i=1;i<=k;i++) cout<<b[i];
	while(!final){
		for(int i=1;i<=k;i++){
			char p=b[i]+'A'-1;
			cout<<p;
		}
		cout<<endl;
		sinh();
	}
}
