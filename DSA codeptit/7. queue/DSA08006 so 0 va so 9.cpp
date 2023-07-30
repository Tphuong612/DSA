#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector <ll> res;

void init(){
	queue <string> q;
	q.push("9");
	res.push_back(9);
	while(1){
		// lay ra phan tu o dau hang doi
		string top=q.front();
		if(top.length()==12) break;
		q.pop();
		res.push_back(stoll(top+'0'));
		res.push_back(stoll(top+'9'));
		q.push(top+'0');
		q.push(top+'9');	
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
		for(int i=0;i<res.size();i++) 
			if(res[i]%n==0){
				cout<<res[i];
				break;
			}
		cout<<endl;
	}
}
