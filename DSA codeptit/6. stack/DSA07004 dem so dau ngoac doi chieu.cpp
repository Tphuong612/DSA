#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <char> st;// su dung stack de loai bo nhung cap da dung
		int open=0, close=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				open++;
				st.push(s[i]);
			}
			else{// khi s[i] la dau dong ngoac
				if(!st.empty() && st.top()=='('){
					open--;
					st.pop();
				}
				else{
					close++;
					st.push(s[i]);
				}
			}
		}
		int ans=open/2 + close/2; // moi cap dong/mo can chi dao chieu 1 lan
		ans+=open%2+close%2; // neu cap nhu vay )( thi can dao chieu ca 2
		cout<<ans<<endl;
	}
}
