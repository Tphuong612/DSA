#include <bits/stdc++.h>
using namespace std;
int n, a[30];
vector <int> v;
vector <string> res;
int b[30];
int check()
{
	for(int i=0;i<v.size()-1;i++)
		if(v[i]>v[i+1]) return 0;
	return 1;
}
void result()
{
	
	for(int i=0;i<n;i++)
		if(a[i]==1) v.push_back(b[i]);
	if(v.size()>=2&&check()){
		string s="";
		for(int i=0;i<v.size();i++) s+=to_string(v[i])+" ";
		s.pop_back();
		res.push_back(s);
	}
	v.clear();
}
void Try(int i)
{
	for(int j=1;j>=0;j--){
		a[i]=j;
		if(i==n-1) result();
		else Try(i+1);
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>b[i];
	Try(0);
	sort(res.begin(), res.end());
	for(auto x:res) cout<<x<<endl;
	
}
