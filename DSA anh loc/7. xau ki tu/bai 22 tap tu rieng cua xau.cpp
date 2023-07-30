#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &a)
{
	for(int i=0;i<a.size();i++) a[i]=tolower(a[i]);
}
int main()
{
	string s, t;
	getline(cin, s);
	getline(cin, t);
	chuanhoa(s);
	chuanhoa(t);
	set <string> se1, se2;
	
	stringstream ss1(s);// tach xau s
	string tmp1;
	while(ss1>>tmp1){
		se1.insert(tmp1);
	}
	
	stringstream ss2(t);// tach xau t
	string tmp2;
	while(ss2>>tmp2){
		se2.insert(tmp2);
	}
	
	for(auto x:se1){
		if(se2.count(x)==0) cout<<x<<" ";
	}
	
}
