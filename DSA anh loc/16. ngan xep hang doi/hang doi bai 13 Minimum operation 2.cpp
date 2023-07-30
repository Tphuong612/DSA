#include <bits/stdc++.h>
#define ll long long
using namespace std;

int BFS(int a){
	set <int> s;
	queue <pair<int, int>> q;
	q.push({a, 0});
	s.insert(a);// kiem tra gia tri nay da xet hay chua
	while(!q.empty()){
		auto top=q.front();
		int x=top.first, y=top.second;
		q.pop();
		if(x==1) return y;
		
		if(!s.count(x-1) && x-1>0){
			q.push({x-1, y+1});
			s.insert(x-1);
		}
		
		for(int i=2; i<=sqrt(a); i++){
			if(x%i==0){
				int v=max(i, x/i);
				if(!s.count(v)){
					s.insert(v);
					q.push({v, y+1});
				}
			}
		}
	}
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<BFS(a)<<endl;
	}
}
