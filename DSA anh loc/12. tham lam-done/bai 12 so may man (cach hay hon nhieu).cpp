#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s="";
	int check=0;
	for(int d7=n/7;d7>=0;d7--){
		int tmp=n-7*d7;
		if(tmp%4==0){
			check=1;
			for(int j=0;j<tmp/4;j++) s+="4";
			for(int j=0;j<d7;j++) s+="7";
			cout<<s;
			break;	
		}
	}
	if(check==0) cout<<"-1";
	
}
