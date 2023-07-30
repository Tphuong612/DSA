#include <bits/stdc++.h>// do dai day=vi tri hien tai - vi tri truoc cua vi tri batdau;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <int> st;
		int res=0;
		st.push(-1);// tao co so
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				st.push(i);// them vi tri cua phan tu vao trong stack
			}
			else{// tuc la luc nay s[i]==')'
				st.pop();
				if(st.size()>0) res = max(res, i-st.top());// sau khi st.pop() thi st.top() la vi tri truoc cua vi tri bat dau
				// l1: ngoac dung vs minh no, cang ngay cang mo rong,....
				if(st.size()==0) st.push(i);// tao co so moi 
			}	
		}
		cout<<res<<endl;
		
	}
}
