#include <bits/stdc++.h>
using namespace std;
int n, k;
string s, tmp="";
void Try(int pos){
	for(int j=pos;j<s.size();j++){
		tmp+=s[j];
		if(tmp.size()==k) cout<<tmp<<endl;
		else Try(j);
		tmp.pop_back();
	}
}
int main()
{
	cin>>n>>k>>s;
	sort(s.begin(), s.end());
	Try(0);
}
