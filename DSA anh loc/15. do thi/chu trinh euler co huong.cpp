#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
set <int> ke[1005];
int degra[1005], degvao[1005];// tinh bac cua cac dinh
void nhap(){
	cin>>n>>m;// n dinh, m canh
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].insert(y);
//		ke[y].insert(x);
		degra[x]++;
		degvao[y]++;
	}
}

void euler(int u){
	stack <int> st;
	vector <int> ce;
	st.push(u);
	while(!st.empty()){
		int top = st.top();
		if(ke[top].size()!=0){
			int t = *ke[top].begin();
			st.push(t);
			ke[top].erase(t);
			//ke[t].erase(top);
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
	euler(1);
}
