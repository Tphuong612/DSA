#include <bits/stdc++.h>
using namespace std;
//struct sv{
//	string name;
//	string msv;
//};
int main()
{
	int n;
	cin>>n;
	scanf("\n");
	string name, msv;
	map <string, string> m;
	while(n--){
		getline(cin, msv);
		getline(cin, name);
		m.insert({msv,name});
	}
	int q;
	cin>>q;
	cin.ignore();
	
	while(q--){
		string tmp;
		cin>>tmp;
		cin.ignore();
		auto it=m.find(tmp);
		if(it!=m.end()) cout<<(*it).second<<endl;
		else cout<<"NOT FOUND"<<endl;
	}
	
}
