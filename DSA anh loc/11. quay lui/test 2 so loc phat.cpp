#include <bits/stdc++.h>
using namespace std;
int a[20], dem, n;
vector<vector<int>> v;
void in(){
	dem++;
	vector<int> tmp;
	for(int i=1;i<=n;i++) tmp.push_back(a[i]);
	v.push_back(tmp);
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==0) a[i]=6;
		else a[i]=8;
		if(i==n){
			in();
		}
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		v.clear();
		dem=0;
		cin>>n;
		Try(1);
		cout<<dem<<endl;
		for(int i=0;i<v.size(); i++){
			for(auto x: v[i]) cout<<x;
			cout<<" ";
		}
		cout<<endl;
	}
}
