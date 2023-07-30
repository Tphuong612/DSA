#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	vector <int> adj[1005];
	for(int i=1;i<=n;i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string num;
		while(ss>>num){
			int k=stoi(num);
			adj[i].push_back(k);
		}
	}
	for(int i=1;i<=n;i++){
		for(auto j: adj[i]){
			if(j>i) cout<<i<<" "<<j<<endl;
		}
	}
}
