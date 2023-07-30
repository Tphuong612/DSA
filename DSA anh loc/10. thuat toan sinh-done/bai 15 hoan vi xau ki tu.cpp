#include <bits/stdc++.h>
using namespace std;
string s;
vector <char> v;
void sinh()
{
	do{
		for(int i=0;i<v.size();i++) cout<<v[i];
		cout<<endl;
	}
	while(next_permutation(v.begin(), v.end()));
}
int main()
{
	cin>>s;
	set <char> st;
	for(int i=0;i<s.length();i++) st.insert(s[i]);
	for(auto x: st){
		v.push_back(x);
	}
	sinh();
}
