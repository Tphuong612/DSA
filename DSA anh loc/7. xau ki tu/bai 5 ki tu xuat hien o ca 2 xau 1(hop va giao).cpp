#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	set <char> giao, hop, sb;// sb=set of b: dung de tim kiem giao
	for(int i=0;i<a.length();i++)
		hop.insert(a[i]);
	for(int i=0;i<b.length();i++){
		hop.insert(b[i]);
		sb.insert(b[i]);
	}
	
	for(int i=0;i<a.length();i++){
		if(sb.count(a[i])){
			giao.insert(a[i]);
			sb.erase(a[i]);
		}
	}	
	
	for(auto x:giao) cout<<x;
	cout<<endl;
	for(auto x:hop) cout<<x;	
}
