#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	queue <int> q;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int n;
			cin>>n;
			q.push(n);
		}
		else if(s=="POP"){
			if(!q.empty()) q.pop();
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front();
			else cout<<"NONE";
			cout<<endl;
		}
	}
}
