#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector <string> res;
bool check(string s, string n){
	if(s.size()==n.size()) return s<=n;
	return s.size()<n.size();
}
void init(){
	queue <string> q;
	q.push("1");
	res.push_back("1");
	string top;
	while(1){
		// lay ra phan tu o dau hang doi
		top=q.front();
		if(top.length()==20) break;
		q.pop();
		res.push_back(top+'0');
		res.push_back(top+'1');
		q.push(top+'0');
		q.push(top+'1');
	
	}
}
int main()
{
	init();
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int dem=0;
		for(int i=0;i<res.size();i++){
			if(check(res[i], n)) dem++;
			else break;
		}
		cout<<dem<<endl;
//		int dem=upper_bound(res.begin(), res.end(), n) - res.begin();
//		cout<<dem<<endl;
	}
}
