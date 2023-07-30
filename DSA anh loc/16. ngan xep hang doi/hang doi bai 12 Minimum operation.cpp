#include <bits/stdc++.h>
#define ll long long
using namespace std;

int BFS(int a, int b){
	if(a==b) return 0;
	set <ll> s;

	queue <pair<ll, ll>> q;
	q.push({a, 0});
	s.insert(a);// kiem tra gia tri nay da xet hay chua
	while(!q.empty()){
		auto top=q.front();
		int x=top.first, y=top.second;
		q.pop();
		if(x==b) return y;
		if(!s.count(2*x) && x<b){
			q.push({2*x, y+1});
			s.insert(2*x);
		}
		if(!s.count(x-1) && x-1>0){
			q.push({x-1, y+1});
			s.insert(x-1);
		}
	}
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		cout<<BFS(a,b)<<endl;
	}
}
