#include <bits/stdc++.h>
using namespace std;
bool check(string s)// kiem tra co thua ngoac hay khong, true la khong thua, false la thua
{
	stack <char> st;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(!isalpha(s[i]) && s[i]!=')' && s[i]!=' ') st.push(s[i]);
		else{
			bool ok=false;
			while (st.size()>0){
				char c = st.top();
				st.pop();
				if(c=='+' || c=='-' || c=='*' || c=='/') ok=true;
				if(c=='(') break;// sket thuc kiem tra 1 ngoac (co the dung hoac sai)
			}
			if(!ok) return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		// tra loi cho cau hoi co thua ngoac hay khong
		if(check(s)) cout<<"No";
		else cout<<"Yes";
		cout<<endl;
	}
}
