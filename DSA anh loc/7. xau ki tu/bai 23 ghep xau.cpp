#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	vector <string> v;
	while(n--){
		string tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	string kq="";
	for(int i=v.size()-1;i>=0;i--){
		if(kq+v[i]>v[i]+kq) kq=kq+v[i];
		else kq=v[i]+kq;
	}
	cout<<kq;
}
