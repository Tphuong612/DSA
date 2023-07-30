#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <string> v;
void solve(){
	queue <string> q;
	q.push("1");
	v.push_back("1");
	while(1){
		if(v.size()==100005) break;
		string s=q.front();
		q.pop();
		string k1=s+'0';
		string k2=s+'1';
		q.push(k1);
		q.push(k2);
		v.push_back(k1);
		v.push_back(k2);	
	} 
}
int main()
{
	int n;
	cin>>n;
	
	solve();
	for(int i=0; i<n; i++) cout<<v[i]<<" ";
	
}
