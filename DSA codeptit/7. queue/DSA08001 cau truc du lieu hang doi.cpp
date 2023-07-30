#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int m;// m truy van
		cin>>m;
		queue <int> q;
		while(m--){
			int n;
			cin>>n;
			if(n==1) cout<<q.size();
			if(n==2){
				if(q.empty()) cout<<"YES";
				else cout<<"NO";
			}
			if(n==3){
				int x;
				cin>>x;
				q.push(x);
			}
			if(n==4){
				if(!q.empty()) q.pop();
			}
			if(n==5){
				if(q.empty()) cout<<-1;
				else cout<<q.front();
			}
			if(n==6){
				if(q.empty()) cout<<-1;
				else cout<<q.back();
			}
			cout<<endl;
		}
	}
}
