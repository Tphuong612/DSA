#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector <int> v;
	stack <int> st;
	while(t--){
		string s;
		cin>>s;
		if(s=="show"){
			if(v.size()>0){
				for(int i: v){
					cout<<i<<" ";
				}
			}
			else cout<<"EMPTY";
			cout<<endl;
		}
		if(s=="push"){
			int n;
			cin>>n;
			st.push(n);
			v.push_back(n);
		}
		if(s=="pop" && !st.empty()){
			st.pop();
			v.pop_back();
		}
	}
}
