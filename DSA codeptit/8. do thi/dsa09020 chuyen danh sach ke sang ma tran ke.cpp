#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main()
{
	int n;
	cin>>n;// n la so canh v
	cin.ignore();
	vector <int> edg[1001];
	for(int i=1;i<=n;i++){
		string s;
		getline(cin, s);
		string num;
		stringstream ss(s);
		while(ss>>num){
			int k=stoi(num);
			edg[i].push_back(k);
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j: edg[i]) 
			a[i][j]=a[j][i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			{
				if(a[i][j]) cout<<"1 ";
				else cout<<"0 ";
			}
		cout<<endl;
	}
}
