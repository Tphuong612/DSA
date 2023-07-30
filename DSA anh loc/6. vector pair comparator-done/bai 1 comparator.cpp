#include <bits/stdc++.h>
using namespace std;
struct so{
	int gtr;
	int le=0;
	int chan=0;
	int index;
};
bool cmp1(so a, so b)
{
	if(a.chan==b.chan) return a.gtr<b.gtr;
	return a.chan<b.chan;
}
bool cmp2(so a, so b)
{
	if(a.le==b.le) return a.index<b.index;
	return a.le<b.le;
}
int main()
{
	int n;
	cin>>n;
	vector <so> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].gtr;
		v[i].index=i;
		string s=to_string(v[i].gtr);
		for(int j=0;j<s.size();j++)
			{
				if((s[j]-'0')%2==0) v[i].chan++;
				else v[i].le++;
			}
	}
	sort(v.begin(), v.end(), cmp1);
	for(int i=0;i<n;i++) cout<<v[i].gtr<<" ";
	cout<<endl;
	
	sort(v.begin(), v.end(), cmp2);
	for(int i=0;i<n;i++) cout<<v[i].gtr<<" ";
}
