#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
set <int> ke[1005];
int degree[1005];// tinh bac cua cac dinh
int a[1005][1005];
void nhap(){
	cin>>n;// n dinh, m canh
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
			ke[i].insert(j);
			ke[j].insert(i);
			degree[i]++;
			degree[j]++;
		}
	}
}
int check(){// kiem tra chu trinh euler
	for(int i=1; i<=n; i++){
		if(degree[i]%2==1) return 0;
	}
	return 1;
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
			ke[t].erase(top);
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
