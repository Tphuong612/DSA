#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		map <char, int> m;
		for(int i=0; i<s.length(); i++){
			m[s[i]]++;
		}
		priority_queue <ll> q;// dua ra max
	
		for(int i=0; i<s.length();i++){
			if(m[s[i]]!=0){
				q.push(m[s[i]]);
				m[s[i]]=0;
			}
		}
		long long sum=0;
		while(k--){
			if(q.top()==0) break;
			if(!q.empty()){
				int t=q.top(); 
				q.pop();
				t=t-1;
				q.push(t);
			}
			
		}
		while(!q.empty()){
			ll t=q.top();
			q.pop();
			sum+=1ll*t*t;
		}
		cout<<sum<<endl;
	}
	
}
