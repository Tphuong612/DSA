#include <bits/stdc++.h>
using namespace std;
int pre(char c)// kiem tra do uu tien
{
	if(c=='(') return 0;
	else if(c=='+'|| c=='-') return 1;
	else if(c=='*'||c=='/') return 2;
	return 3;// mu, luy thua
}
void solve(string s){
	string kq="";// dung de luu bieu thuc hau to
	stack <char> st;// dung de chua ca dau phep tinh
	
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])) kq+=s[i];
		else if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				kq+=st.top();
				st.pop();// xoa khoi stack do da dc dung trong string kq
			}
			st.pop();// xoa dau mo ngoac di
		}
		else{
			while(!st.empty() && pre(st.top())>=pre(s[i])){
				kq+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}	
	}
	
	while(!st.empty()){// dua het cac phan tu con lai trong stack ra
		if(st.top()!='(')kq+=st.top();
		st.pop();
	}
	cout<<kq<<endl;	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
}
