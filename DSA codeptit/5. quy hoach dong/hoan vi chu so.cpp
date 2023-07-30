#include <bits/stdc++.h>
using namespace std;
string s;
void hoanvi(){
	do{
		if(s[0]=='0'){
			for(int i=1;i<s.length();i++) cout<<s[i];
		}
		else cout<<s;
		cout<<endl;
	}
	while(next_permutation(s.begin(), s.end()));
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		sort(s.begin(), s.end());
		hoanvi();
	}
}
