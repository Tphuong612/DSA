#include <bits/stdc++.h>
using namespace std;
/*
y tuong: so luong phan tu con lai trong xau 
phai lon hon so lan xuat hien nhieu nhat trong xau
*/
int main()
{
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
	if(s.length()-d>=(d-1)) cout<<"YES\n";// vi d so lien tiep tao ra d-1 khoang trong o giua
	else cout<<"NO\n";
}
