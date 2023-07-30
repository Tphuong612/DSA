#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <string> v;
void solve(){
	queue <string> q;
	q.push("8");
	v.push_back("8");
	while(1){
		string s=q.front();
		if(s.length()==20) break;
		q.pop();
		string k1=s+'0';
		string k2=s+'8';
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
	for(int i=0; i<30; i++) cout<<v[i]<<" ";
	while(n--){
		int a;
		cin>>a;
		for(int i=0; i<v.size(); i++){
			long long k=stoll(v[i]);
			if(k%a==0){
				cout<<k<<endl;
				break;
			}
		}
	}
	
}
