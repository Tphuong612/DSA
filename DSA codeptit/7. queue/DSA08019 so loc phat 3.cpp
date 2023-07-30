#include <bits/stdc++.h>
using namespace std;
vector <string> res;

void init(){
	queue <string> q;
	q.push("6");
	q.push("8");
	res.push_back("6");
	res.push_back("8");
	while(1){
		// lay ra phan tu o dau hang doi
		string top=q.front();
		if(top.length()==16) break;
		q.pop();
		res.push_back(top+'6');
		res.push_back(top+'8');
		q.push(top+'6');
		q.push(top+'8');
	}
}
int main()
{
	init();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <string> v;
		for(int i=0;i<res.size();i++){
			if(res[i].size()<=n) v.push_back(res[i]);
			else break;
		}
		cout<<v.size()<<endl;
		for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
		cout<<endl;
	}
}
