#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stack <int> st;
		vector <int> ans;
		int cnt=0;
		for(auto x: s){
			if(x=='('){
				cnt++;
				st.push(cnt);
				ans.push_back(cnt);
			}
			if(!st.empty() && x==')'){
				int tmp=st.top();
				ans.push_back(tmp);
				st.pop();
			}
		}
		for(auto x: ans){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
