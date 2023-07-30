#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int s, d;
		string sct="";
		cin>>s>>d;//s tong cac cs, d la so luong chu so
		if(s==0&&d==1) cout<<0<<endl;
		else if(s>9*d||s==0&&d>1) cout<<"-1\n";
		else {
			string sct= string(d, '0');
			for(int i=d-1; i>=0;i--){
				if(s>9){
					sct[i]='9';
					s-=9;
				}
				else{
					if(i==0) sct[0]+=s;
					else{
						sct[i]+=s-1;
						sct[0]+=1;
					}
					break;
				}
			}
			cout<<sct<<endl;
			
		}
	}
}
