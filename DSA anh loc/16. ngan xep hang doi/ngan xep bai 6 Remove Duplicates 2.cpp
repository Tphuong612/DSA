#include <bits/stdc++.h>
using namespace std;
#define ii pair <int, int>
int main()
{
	string s;
	int k;
	cin>>s>>k;
	stack <ii> st;
	for(int i=0; i<s.length(); i++){
		if(st.empty()){
			st.push({s[i], 1});
		}
		else{
			ii t=st.top();
			if(s[i]==t.first){
				int cnt=t.second+1;
				if(cnt==k){
					st.pop();
				}
				else{
					st.pop();
					st.push({s[i], cnt});
				}
			}
			else{
				st.push({s[i], 1});
			}
		}
	}
	string kq="";
	while(!st.empty()){
		ii t=st.top();
		st.pop();
		for(int i=1; i<=t.second; i++){
			kq += t.first;
		}
	}
	
	if(kq.length()>0){
		for(int i=kq.length()-1; i>=0; i--) cout<<kq[i];
	}
	else cout<<"EMPTY";
	cout<<endl;
}