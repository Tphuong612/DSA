#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	deque <int> q;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSHBACK"){
			int x;
			cin>>x;
			q.push_back(x);
		}
		if(s=="PUSHFRONT"){
			int x;
			cin>>x;
			q.push_front(x);
		}
		if(s=="POPBACK"){
			if(!q.empty()) q.pop_back();
		}
		if(s=="POPFRONT"){
			if(!q.empty()) q.pop_front();
		}
		if(s=="PRINTBACK"){
			if(q.empty()) cout<<"NONE";
			else cout<<q.back();
			cout<<endl;
		}
		if(s=="PRINTFRONT"){
			if(q.empty()) cout<<"NONE";
			else cout<<q.front();
			cout<<endl;
		}
	}
}
