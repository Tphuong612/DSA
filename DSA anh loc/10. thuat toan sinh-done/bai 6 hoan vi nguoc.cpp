#include <bits/stdc++.h>
using namespace std;
int n, k, a[20];
bool final=false;
vector<vector<int>> v;
void sinh()//to hop
{

	do{
		vector<int> tmp;
		for(int i=0;i<n;i++) tmp.push_back(a[i]);
		v.push_back(tmp);
	}
	while(next_permutation(a, a+n));
	
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) a[i]=i+1;
	sinh();
	for(int i=v.size()-1;i>=0;i--){
		for(int j=0;j<v[i].size();j++) cout<<v[i][j];
		cout<<endl;
	}
}
