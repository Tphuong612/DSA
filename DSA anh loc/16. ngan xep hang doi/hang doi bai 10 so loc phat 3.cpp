#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <string> v;
void solve(){
	queue <string> q;
	q.push("6");
	q.push("8");
	v.push_back("6");
	v.push_back("8");
	while(1){
		string s=q.front();
		if(s.length()==18) break;
		q.pop();
		string k1=s+'6';
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
	//for(int i=0; i<30; i++) cout<<v[i]<<" ";
	while(n--){
		long long a;
		cin>>a;
		vector <string> res;
		for(int i=0; i<v.size(); i++){
			if(v[i].length()<=a){
				res.push_back(v[i]);
			}
		}
		cout<<res.size()<<endl;
		for(int i=res.size()-1; i>=0; i--){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	
}
