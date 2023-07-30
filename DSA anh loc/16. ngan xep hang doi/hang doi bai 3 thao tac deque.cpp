#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	deque <int> q;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSHFRONT"){
			int n;
			cin>>n;
			q.push_front(n);
		}
		else if(s=="PUSHBACK"){
			int n;
			cin>>n;
			q.push_back(n);
		}
		else if(s=="POPBACK"){
			if(!q.empty()) q.pop_back();
		}
		else if(s=="POPFRONT"){
			if(!q.empty()) q.pop_front();
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front();
			else cout<<"NONE";
			cout<<endl;
		}
		else if(s=="PRINTBACK"){
			if(!q.empty()) cout<<q.back();
			else cout<<"NONE";
			cout<<endl;
		}
		
	}
}
