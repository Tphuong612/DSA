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
		
		int n=s.length();
		stack <int> st;
		for(int i=0;i<n;i++){
			if(s[i]=='(') st.push(i);
			if(s[i]==')'){
				if(st.size()){
					s[st.top()]='0';
					st.pop();
					s[i]='1';
				}
				else{
					s[i]='2';
				}
			}
		}
		while(st.size()){
			s[st.top()]='2';
			st.pop();
		}
		for(int i=0;i<n;i++){
			if(s[i]=='2') cout<<-1;
			else cout<<s[i];
		}
		cout<<endl;
	}
}
