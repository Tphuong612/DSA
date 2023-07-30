#include <bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100];// mang a la mang ban dau, mang x de chua
vector<vector<int>> v;
void Try(int i, int sum, int start)
{
	for(int pos=start; pos<n; pos++){// duyet cac ptu trong mang a
		x[i]=a[pos];
		sum+=a[pos];
		if(sum==s){
			vector <int> tmp (x+1, x+i+1);
			v.push_back(tmp);
		}
		else if(sum<s) Try(i+1, sum, pos );
		sum-=a[pos];// buoc backtrack;
	}
}
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	Try(1, 0, 0);
	if(v.size()==0) cout<<"-1\n";
	else{
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){
		cout<<"{";
		for(int j=0;j<v[i].size();j++){
			if(j!=v[i].size()-1) cout<<v[i][j]<<" ";
			else cout<<v[i][j]<<"}";
		}
		cout<<endl;
	}
	}
}
