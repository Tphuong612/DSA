#include <bits/stdc++.h>
using namespace std;
void solve(string s){
	stack <int> st;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int b=st.top(); st.pop();
			int a=st.top(); st.pop();
			int res;
			if(s[i]=='+') res=a+b;
			if(s[i]=='-') res=a-b;
			if(s[i]=='*') res=a*b;
			if(s[i]=='/') res=a/b;
			if(s[i]=='%') res=a%b;
			st.push(res);
		}
	}
	cout<<st.top()<<endl;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		
		string s;
		getline(cin, s);
		
		string kq="";
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			kq+=tmp;
		}
		//cout<<kq<<endl;
		solve(kq);
	}
}
