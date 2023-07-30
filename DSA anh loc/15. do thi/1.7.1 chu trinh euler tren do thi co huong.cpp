#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
set <int> ke[1005];
int degree_ra[1005], degree_vao[1005];// tinh bac cua cac dinh
void nhap(){
	cin>>n>>m;// n dinh, m canh
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].insert(y);
		ke[y].insert(x);
		degree_ra[x]++;// deg+
		degree_vao[y]++;// deg-
	}
}
int check(){// kiem tra chu trinh euler
	for(int i=1; i<=n; i++){
		if(degee_ra[i] != degree_vao[i]) return 0;
	}
	return 1;
}
void euler(int u){
	stack <int> st;
	vector <int> ce;
	st.push(u);
	while(!st.empty()){
		int s = st.top();
		if(ke[s].size()!=0){
			int t = *ke[s].begin();
			st.push(t);
			ke[s].erase(t);
//			ke[t].erase(s);
		}
		else{
			st.pop();
			ce.push_back(top);
		}
	}
	reverse(ce.begin(), ce.end());
	for(int x: ce) cout<<x<<" ";
	cout<<endl;
	
}
int main()
{
	nhap();
	if(check()==1) euler(1);
	else cout<<"khong co chu trinh euler";
}
