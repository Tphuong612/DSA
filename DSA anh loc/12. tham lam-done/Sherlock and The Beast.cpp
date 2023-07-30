#include <bits/stdc++.h>
using namespace std;
/*
goi x la so luong so 5, y la so luong so 3
tim 2 so x+y=n;
x chia het cho 3=> x=3*j;
y chia het cho 5=> y=5*i;

*/
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int check=0;
		string s="";
		for(int i=n/3;i>=0;i--){
			int tmp=n-3*i;
			if(tmp%5==0){
				check=1;
				for(int j=0;j<3*i;j++) s+='5';
				for(int i=0;i<tmp;i++) s+='3';
				cout<<s;
				break;
			}
		}
		if(check==0) cout<<"-1";
		cout<<endl;
	}
}
