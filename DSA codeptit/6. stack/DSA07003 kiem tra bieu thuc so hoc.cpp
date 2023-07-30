#include <bits/stdc++.h>
using namespace std;
bool check(string s){// kiem tra hop le
	stack <char> st;
	for(int i=0;i<s.size(); i++){
		if(s[i]!=')') st.push(s[i]);
		else{// bat dau kiem tra
			int check=0;
			while(!st.empty()){// kiem ra xem co the hop le khong
				char c=st.top();// lay dinh ngan xep ra kiem tra
				st.pop();
				if(c=='+' || c=='-' || c=='*' || c=='/') check=1;
				if(c=='(') break;// ket thuc 1 dau ngoac dung
			}
			if(check==0) return false;// neu sai thi sai luon
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
		if(!check(s)) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}
