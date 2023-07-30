#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	queue <int> q;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<q.size();
			cout<<endl;
		}
		else if(n==2){
			if(q.empty()) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
		else if(n==3){
			int a;
			cin>>a;
			q.push(a);
		}
		else if(n==4){
			if(!q.empty()) q.pop();
		}
		else if(n==5){
			if(!q.empty()) cout<<q.front();
			else cout<<-1;
			cout<<endl;
		}
		else{
			if(!q.empty()) cout<<q.back();
			else cout<<-1;
			cout<<endl;
		}
	}
}
