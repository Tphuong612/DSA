#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		map<char, int> m;
		for(int i=0;i<s.length();i++){
			m[s[i]]++;
		}
		int d=-1;
		for(int i=0;i<s.length();i++){
			if(m[s[i]]>d) d=m[s[i]];
		}
//		cout<<d<<endl;
		if(s.length()-d>=d-1) cout<<"1\n";// vi d so lien tiep tao ra d-1 khoang trong o giua
		else cout<<"-1\n";
	}
}