#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=1;
//	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		priority_queue <long long> q;
		map <char, int> m;
		for(int i=0;i<s.length();i++){
			m[s[i]]++;
		}
		for(int i=0;i<s.length();i++){
			if(m[s[i]]!=0){
				q.push(m[s[i]]);
				m[s[i]]=0;
			}
		}
		long long sum=0;
		while(k--){
			if(q.top()==0) break;
			else{
				int c=q.top()-1;
				q.pop();
				q.push(c);
			}
		}
		while(!q.empty()){
			sum+=(long long) q.top()*q.top();
			q.pop();
		}
		cout<<sum<<endl;
	}
}
