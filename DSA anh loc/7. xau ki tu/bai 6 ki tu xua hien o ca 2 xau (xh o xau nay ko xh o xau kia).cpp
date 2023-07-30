#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	set <char> xha, xhb, onlya, onlyb;// xuat hien o a, xuat hien o b, chi xh o a, chi xh o b;
	for(int i=0;i<a.length();i++)
		xha.insert(a[i]);
	for(int i=0;i<b.length();i++){
		xhb.insert(b[i]);
	}
	
	for(int i=0;i<a.length();i++){// chi xh o string a
		if(xhb.count(a[i])==0){
			onlya.insert(a[i]);
		}
	}	
	
	for(int i=0;i<b.length();i++){// chi xuat hien o string b
		if(xha.count(b[i])==0){
			onlyb.insert(b[i]);
		}
	}	
	
	for(auto x:onlya) cout<<x;
	cout<<endl;
	for(auto x:onlyb) cout<<x;
}
