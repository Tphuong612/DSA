#include <bits/stdc++.h>
using namespace std;
int n, a[20], x[20];// x la mang nhi phan, a la mang chua cac stn lien tiep
bool final=false;
vector <vector<int>> v;
void sinh()
{
	int i=n;
	while(i>=1&&x[i]==1){
		x[i]=0;
		i--;
	}
	if(i==0) final=true;
	else x[i]=1;
}
int main()
{
	cin>>n;
	for(int i=1; i<=n;i++) a[i]=i;
	for(int i=1;i<=n;i++) x[i]=0;
	while(!final){
		vector <int> tmp;
		for(int i=1;i<=n;i++)
			if(x[i]==1) tmp.push_back(a[i]);
		v.push_back(tmp);
		sinh();
	}
	sort(v.begin(), v.end());
//	cout<<v.size()<<endl;
	for(int i=1;i<v.size();i++){// luu y, phan tu dau tien cua vector v la vector rong
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}
}
