#include <bits/stdc++.h>
using namespace std;
int main()
{
	int v;
	cin>>v;// v la so dinh
	cin.ignore();
	vector <int> edg[100];
	for(int i=1;i<=v;i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string num;
		while(ss>>num)
		{
			int k=stoi(num);
			edg[i].push_back(k);
		}
	}
	for(int i=1;i<=v;i++){
		for(int j:edg[i])
			if(j>i) cout<<i<<" "<<j<<endl;
	}
}
