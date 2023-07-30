#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
vector <pair<int, int>> canh;
int color[1005]={0};// 1 la mau xanh, 2 la mau do
void solve(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		canh.push_back({x, y});
	}
	auto p=*canh.begin();
	color[p.first] = 1;
	color[p.second] = 2;
	int ok=1;
	for(auto x: canh){
		if(color[x.first] == 1 && color[x.second] == 0) color[x.second]=2;
		else if(color[x.first] == 2 && color[x.second] == 0) color[x.second]=1;
		else if(color[x.second] == 2 && color[x.first] == 0) color[x.first]=1;
		else if(color[x.second] == 1 && color[x.first] == 0) color[x.first]=2;
		else if(color[x.first] == 1 && color[x.second] == 1 || color[x.first] == 2 && color[x.second] == 2){
			ok=0;
			cout<<"NO";
			break;
		}
		else{
				color[x.first] = 1;
				color[x.second] =2;
		}
	}
	if(ok==1) cout<<"YES";
	
}
int main()
{
	solve();
}
