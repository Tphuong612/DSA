#include <bits/stdc++.h>
#define ll long long
using namespace std;
int pre(char c){
	if(c=='^') return 3;
	else if(c=='*'||c=='/') return 2;
	else if(c=='+'||c=='-') return 1;
	return 0;
}
int main()
{
	string s;
	cin>>s;
	stack <char> st;
	string kq="";
	for(int i=0; i<s.length(); i++){
		if(isalpha(s[i])) kq+=s[i];
		else if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				kq+=st.top();
				st.pop();
			}
			st.pop();// xoa dau mo ngoac
		}
		else{// neu gap dau phep tinh
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
