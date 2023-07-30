#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector <ll> res;

void init(){
	queue <string> q;
	q.push("1");
	res.push_back(1);
	while(1){
		// lay ra phan tu o dau hang doi
		string top=q.front();
		if(top.length()==19) break;
		q.pop();
		res.push_back(stoll(top+'0'));
		res.push_back(stoll(top+'1'));
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
		long long n;
		cin>>n;
		int dem=upper_bound(res.begin(), res.end(), n) - res.begin();
		cout<<dem<<endl;
	}
}
