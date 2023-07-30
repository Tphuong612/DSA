#include <bits/stdc++.h>
using namespace std;
void hvi(string s){
	do{
		cout<<s<<" ";
	}
	while(next_permutation(s.begin(), s.end()));
}
int main(){
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		hvi(s);
		cout<<endl;
	}
}