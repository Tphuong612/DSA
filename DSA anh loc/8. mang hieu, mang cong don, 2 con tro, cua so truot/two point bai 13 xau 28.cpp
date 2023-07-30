#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int x,y;
	cin>>x>>y;
	int l=0, r;
	map <int, int> m;
	int ans=0;
	for(r=0;r<s.length();r++){
		m[s[r]]++;
		while(m['2']>x||m['8']>y){
			m[s[l]]--;
			if(m[s[l]]==0) m.erase(s[l]);
			l++;
		}
//		cout<<l<<" "<<r<<endl;
		ans=max(ans, r-l+1);
	}
	cout<<ans;
}
