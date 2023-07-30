#include <bits/stdc++.h>
using namespace std;
int n, k, a[30];
vector<vector<int>>v;
vector<int> tmp;

void Try(int pos, int sum){
	for(int j=pos+1;j<=n;j++){
		if(sum+a[j]<=k){
			tmp.push_back(a[j]);
			if(sum+a[j]==k){
				v.push_back(tmp);
			}
			else{
				Try(j, sum+a[j]);
			}
			tmp.pop_back();
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1, a+n+1);
	Try(0, 0);
	
	if(v.size()==0) cout<<"-1";
	for(int i=0;i<v.size();i++){
		cout<<"[";
		for(int j=0;j<v[i].size();j++){
			if(j!=v[i].size()-1) cout<<v[i][j]<<" ";
			else cout<<v[i][j]<<"]";
		}
		cout<<endl;
	}
}
