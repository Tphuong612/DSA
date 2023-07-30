#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
{
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}
int main()
{
	string n;
	cin>>n;
	int tong=0;
	bool check=true;
	for(int i=0;i<n.length();i++){
		if(!nt(n[i]-'0')){
			check=false;
			break;
		}
		tong+=n[i]-'0';
	}
	if(check&&nt(tong)) cout<<"YES";
	else cout<<"NO";
}
