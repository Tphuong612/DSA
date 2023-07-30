#include <bits/stdc++.h>
using namespace std;
vector <string> v;
void hvi(string s){
	do{
		v.push_back(s);
	}
	while(next_permutation(s.begin(), s.end()));
}
int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		string s="";
		for(int i=1; i<=n; i++) s+=to_string(i);
		hvi(s);
		for(int i=v.size()-1; i>=0; i--) cout<<v[i]<<" ";
		cout<<endl;
		v.clear();
	}
}