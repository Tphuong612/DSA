#include <bits/stdc++.h>
using namespace std;
int n, a[20], dem=0;
string s="";
void sinh()
{
	do{
		dem++;
		string check="";
		for(int i=0;i<n;i++) check+=to_string(a[i]);
		if(check==s){
			cout<<dem;
			break;
		}
	}
	while(next_permutation(a, a+n));
}
int main()
{
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++) a[i]=i+1;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		s+=to_string(x);
	}
	sinh();
}
