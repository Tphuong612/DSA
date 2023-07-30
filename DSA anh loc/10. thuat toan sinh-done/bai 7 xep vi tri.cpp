#include <bits/stdc++.h>
using namespace std;
int n;
string a[20];
bool final=false;
vector<vector<string>> v;
void sinh()//to hop
{

	do{
//		vector<string> tmp;
//		for(int i=0;i<n;i++) tmp.push_back(a[i]);
//		v.push_back(tmp);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	while(next_permutation(a, a+n));
	
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	sinh();
//	for(int i=v.size()-1;i>=0;i--){
//		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
//		cout<<endl;
//	}
}
