#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	while(n--)
	{
		int k;
		cin>>k;
		if(k==1){
			int m;
			cin>>m;
			v.push_back(m);
		}
		else{
			if(!v.empty()) v.pop_back();
		}
	}
	if(v.empty()) cout<<"EMPTY\n";
	else{
		for(int i:v) cout<<i<<" ";
	}
}
