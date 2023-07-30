#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> v;
void solve(){
	queue <string> q;
	q.push("1");
	v.push_back(1);
	while(1){
		string s=q.front();
		if(s.length()==19) break;
		q.pop();
		string k1=s+'0';
		string k2=s+'1';
		q.push(k1);
		q.push(k2);
		v.push_back(stoll(k1));
		v.push_back(stoll(k2));	
	} 
}
int main()
{
	int n;
	cin>>n;
	solve();
	//for(int i=0; i<30; i++) cout<<v[i]<<" ";
	while(n--){
		long long a;
		cin>>a;
		long long dem=lower_bound(v.begin(), v.end(), a) - v.begin();
		cout<<dem<<endl;
	}
	
}
